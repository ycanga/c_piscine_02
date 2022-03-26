//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "BHafFsSJ";
	
	ft_strlowcase(str);
	printf("%s\n",str);
}*/
