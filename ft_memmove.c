#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char* pdst;
    char* psrc;
    int i;
    char* temp;

    pdst = (char*)dst;
    psrc = (char*)src;
    i = 0;
    temp = malloc(sizeof(char) * len);
    while (i < (int)len)
    {
        temp[i] = psrc[i];
        i++;    
    }
    i--;
    while (i >= 0)
    {
        pdst[i] = temp[i];
        i--;    
    }    
    return (dst);
}
