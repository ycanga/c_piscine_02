//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char	s[] = "deneme1";
	int	a;

	a = ft_str_is_lowercase(&s[0]);
	printf("%d\n",a);
}*/
