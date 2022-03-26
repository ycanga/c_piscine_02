//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char	str[] = "DENEE";
	int	a;

	a = ft_str_is_uppercase(&str[0]);
	printf("%d\n",a);
}*/
