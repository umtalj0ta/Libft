/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <jgomes-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:41:21 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/17 15:22:11 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*pdest;
	const char		*psrc;
	unsigned int	i;

	i = 0;
	psrc = (char *)src;
	pdest = (char *)dest;

    if(dest == 0)
        return (NULL);
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
