#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	i = 0;
	unsigned char *string = s;
	while(n--)
	{
		string[i] = (unsigned char)c;
		i++;
	}
return(s);	
}

/*int	main()
{
	char buffer[10];

	ft_memset(buffer, 48, 4);
	printf("%s", buffer);
}*/	
