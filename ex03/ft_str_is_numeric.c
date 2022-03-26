//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char	str[] = "123134";
	int	a;

	a = ft_str_is_numeric(&str[0]);
	printf("%d\n", a);
}*/
