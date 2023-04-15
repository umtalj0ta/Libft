#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    unsigned char* ps1;
    unsigned char* ps2;

    ps1 = (unsigned char*)s1;
    ps2 = (unsigned char*)s2;
    i = 0;

    while(i < n)
    {
        if(ps1[i] != ps2[i])
            return(ps1[i] - ps2[i]);
    i++;        
    }
    return (0);
}
// int main() {
//     char a[] = "hello";
//     char b[] = "hello";
//     char c[] = "world";
//     
//     printf("%d\n", ft_memcmp(a, b, 5)); // output: 0
//     printf("%d\n", ft_memcmp(a, c, 5)); // output: -15
//     return 0;
// }    
