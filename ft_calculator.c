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

int	par_in(char *str, int p)
{
	char	*before;
	char	*par;
	char	*after;
	int	i;
	int	j;
	int	k;
	char	*dict;

	dict = " ([{ ([{";
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] = dict[p])
		{
			before = (char *)malloc(sizeof(char) * j + 1);
			if (before)
			{
				i = i - j;
				k = 0;
				while (k < j)
				{
					before[k] = str[i];
					i++;
					k++;
				}
			}
			j = 0;
		}
		if (str[i] = dict[p + 3])
		{
			par = (char *)malloc(sizeof(char) * j + 1);
			if (par)
			{

			j = 0;
		}
		i++;
		j++;
	}
	after = (char *)malloc(sizeof(char) * j + 1);

}

int	ft_exp_cal(char **exp);

int	ft_calculator(char *str)
{
	int	result;
	char	**exp;

	if (!paren)
		exp = ft_split(str, " ");
	//nje funksion qe gjen kllapat dhe therret calc per brenda kllapave dhe whole exp simultaneously

	if (paren == 1)
	{
		return (par_in(str, 1));
	}
	return (result);
}

