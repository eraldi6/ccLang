#include <stdlib.h>

int	nbrlen(int nbr)
{
	int	i;
	int	j;

	i = 0;
	j = nbr;
	if (j <= 0)
		i++;
	while (j != 0)
	{
		j = j / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int	len;
	int	i;
	int	j;
	char	*str;

	len = nbrlen(nbr);
	i = len - 1;
	j = nbr;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (j == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str[len] = '\0';
	if (nbr < 0)
		j = -nbr;
	while (j > 0)
	{
		str[i] = (j % 10) + '0';
		j = j / 10;
		i--;
	}
	if (i == 0)
		str[i] = '-';
	return (str);
}
