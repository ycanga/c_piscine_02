//#include<stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
/*
int	main()
{
	char	*src;
	char	*dest;

	src = "selam ben ahmet";
	printf("kaynak: %s\n", src);
	ft_strncpy(dest, src, 9);
	printf("kopya: %s\n", dest);
}*/
