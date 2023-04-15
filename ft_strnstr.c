/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:49:38 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/14 13:58:34 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int		i;
	int		lenght;
	char	*small;
	char	*big;

	small = (char *)needle;
	big = (char *) haystack;
	i = 0;
	lenght = ft_strlen(small);
	if (*needle == '\0')
		return ((char *)haystack);
	while (big[i] != '\0' && (i + lenght) <= len)
	{
		if (ft_strncmp((big + i), small, lenght) == 0)
		{
			return (big + i);
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
