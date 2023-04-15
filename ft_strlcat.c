#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t 	dstlen;
	size_t	hold;
	size_t	strlen;

	strlen = ft_strlen(src);
	dstlen = 0;

	while (dstlen < size && dst[dstlen])
	{
		dstlen++;
	}
	hold = dstlen;
	while(src[dstlen - hold] && (dstlen + 1) < size)
	{
		dst[dstlen] = src[dstlen - hold];
		dstlen++;
	}
	if(hold < size)
		dst[dstlen] = '\0';

return(hold + strlen);	
}	
