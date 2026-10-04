#include <stdlib.h>

char	**ft_nonull(char **exp)
{
	char	**str;
	int	i;
	int	counter;
	int	j;

	int	i;
	while (exp[i])
	{
		if (exp[i][0] != '\0')
			counter++;
		i++;
	}
	str = (char **)malloc(sizeof(char *) * (counter + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (exp[i])
	{
		if (exp[i][0] != '\0')
			str[j] = exp[i];
		else
			i++;
	}
	str[i] = NULL;
	return (str);
}
