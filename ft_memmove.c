/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:35:22 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/17 12:38:39 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	char		*psrc;
	int			i;
	char		*temp;

	pdst = (char *)dst;
	psrc = (char *)src;
	i = 0;
    temp = psrc; 
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
