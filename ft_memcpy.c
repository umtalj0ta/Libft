#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        char *pDest = (char*)dest;
        const char *pSrc;
	    pSrc = (char*)src;
        unsigned int    i;  
	    i = 0;
        while(i < n)
        {
                pDest[i] = pSrc[i];
                i++;
        }
return(dest);
} 
