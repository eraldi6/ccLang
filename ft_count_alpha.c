#include <unistd.h>
#include <stdlib.h>

char	*lowe(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

int	before(char *str, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (str[j] == str[i])
			return (1);
		j++;
	}
	return (0);
}

int	is_char(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	occ(char *str, int i)
{
	int	count;
	int	j;

	j = i;
	count = 0;
	while (str[j])
	{
		if (str[j] == str[i])
			count++;
		j++;
	}
	return (count);
}

void	putnbr(int c)
{
	if (c > 9)
	{
		putnbr(c  / 10);
		putnbr(c % 10);
	}
	else
	{
		c = c + '0';
		write(1, &c, 1);
	}
}

void	count_alpha(char *str)
{
	int	i;
	int	count;
	int	flag;

	flag = 0;
	count = 0;
	str = lowe(str);
	i = 0;
	while (str[i])
	{
		if (before(str, i) == 0 && is_char(str[i]))
		{
			if (flag != 0)
				write(1, ", ", 2);
			flag = 1;
			count = occ(str, i);
			putnbr(count);
			write(1, &str[i], 1);
			i++;
		}
		else
			i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **ag)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		count_alpha(ag[1]);
	}
	return (0);
}
