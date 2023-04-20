#include "libft.h"

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  count;

    substr = malloc(sizeof(char) * (len + 1));
    count = 0;
    if(!s)
        return (NULL);
    while(count < len && s[start + count] != '\0' && start < ft_strlen(s))
    {
        substr[count] = s[start + count];
        count++;
    }
    substr[count] = '\0';
    return(substr);    
}

/*int main()
{
        printf("%s", ft_substr("", 1, 4));

}*/
