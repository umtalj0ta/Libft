/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:13:28 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/17 13:14:37 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*hold;

	if (!nmemb || !size)
		return (NULL);
	hold = malloc(size * nmemb);
	ft_bzero(hold, nmemb);
	return (hold);
}
