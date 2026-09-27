int ft_atoi(char *str)
{
	int i;
	int sign;
	int res;
	
	res = 0;
	sign = 1;
	i = 0;
	if (!str)
		return (0);
	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return res * sign;
}