#include <unistd.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int	ft_atoi(char *str);

int	paren(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '{')
			return (3);
		if (str[i] == '[')
			return (2);
		if (str[i] == '(')
			return (1);
		i++;
	}
	return (0);
}

int	ft_calculator(char *str)
{
	int	result;
	char	**exp;

	if (!paren)
		exp = ft_split(str, " ");
	//nje funksion qe gjen kllapat dhe therret calc per brenda kllapave dhe whole exp simultaneously

	return (result);
}

