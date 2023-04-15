#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *hold;
	if(!nmemb || !size)
		return NULL;
	
	hold = malloc(size * nmemb);
	ft_bzero(hold, nmemb);

return (hold);
}
