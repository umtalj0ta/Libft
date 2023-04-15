#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char* ps;
    unsigned char ch;
    int i;

    ps = (char*)s;
    ch = c;
    i = 0;
    while(i < n)
    {
        if(ps[i] == ch)
            return ((char*)ps);
    i++;
    }    
return (NULL);
}

// int main()
// {
//     printf("%p",ft_memchr("zla", 'a' , 3));
// }
