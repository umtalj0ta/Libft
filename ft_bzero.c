#include "libft.h"

void	ft_bzero(void *s, size_t n)
{	
	int	i;

	i = 0;
	unsigned char *string = s;

	while(n--)
	{
		string[i] = '\0';
		i++;
	}
}

/*int	main()
{
	char buffer[10];
	ft_bzero(buffer, 3);
	printf("%s", buffer);
}*/	
