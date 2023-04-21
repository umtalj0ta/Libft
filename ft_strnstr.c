/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:49:38 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/21 16:16:51 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		lenght;

	lenght = (int) len;
	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && i < lenght)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < lenght)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *) haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*int main(void)
{
     char haystack[40] = "olha um vez teste";
     char needle[40] = "um vez";

     printf("%s\n", ft_strnstr(haystack, needle, 17));
     printf("%s", ft_strnstr(haystack, needle,17));
}*/
