#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstring;
	int	s1len;
	int	s2len;
	int	count;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if(!(joinstring = malloc(sizeof(char)*((s1len + s2len) + 1))))
        return (NULL);
	count = 0;
	if(!s1 | !s2)
		return NULL;

	while(count < s1len)
	{
		joinstring[count] = s1[count];
		count++;
	}
	count = 0;
	while(count < s2len)
	{	
		joinstring[s1len + count] = s2[count];
		count++;
	}
    joinstring[s1len + s2len] = '\0';
    return(joinstring);
}
