//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char	s[] = "s1lam";
	int	a;
	
	a=ft_str_is_alpha(&s[0]);
	printf("%d\n",a);
}*/
