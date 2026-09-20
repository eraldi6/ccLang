#include <unistd.h>
#include <stdlib.h>

int	is_sep(char c)
{
	if (c == 32)
		return (1);
	if (c >= 9 && c <= 13)
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_sep(str[i]))
		{
			while (str[i] && !is_sep(str[i]))
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

char	**word(char *str, char **splat, int count)
{
	int	i;
	int	j;
	int	k;
	int	h;

	i = 0;
	k = 0;
	while (str[i] && k < count)
	{
		if (!is_sep(str[i]))
		{
			j = 0;
			while (str[i] && is_sep(str[i]) == 0)
			{
				i++;
				j++;
			}
			splat[k] = (char *)malloc(sizeof(char) * j + 1);
			if (!splat[k])
				splat[k] = NULL;
			h = i - j;
			j = 0;
			while (h < i)
			{
				splat[k][j] = str[h];
				h++;
				j++;
			}
			splat[k][j] = '\0';
			k++;
		}
		else
			i++;
	}
	splat[k] = NULL ;
	return (splat);
}

void	print(char **splat)
{
	int	i;
	int	j;

	i = 0;
	while (splat[i])
	{
		j = 0;
		while (splat[i][j])
		{
			write(1, &splat[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

char	**ft_split(char *str)
{
	char	**splat;
	int	count;

	if (!str)
		return (NULL);
	count = count_words(str);
	splat = (char **)malloc(sizeof(char *) * (count + 1));
	splat = word(str, splat, count);
	return (splat);
}

int	main(int ac, char **ag)
{
	if (ac == 2)
	{
		print(ft_split(ag[1]));
	}
	return (0);
}
