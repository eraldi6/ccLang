#include <unistd.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	paren(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if
