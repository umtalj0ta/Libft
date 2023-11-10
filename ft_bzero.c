/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <achabrer@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:09:34 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/11/10 22:17:16 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*string;

	i = 0;
	string = s;
	while (n--)
	{
		string[i] = '\0';
		i++;
	}
}

/*int	main()
{
	char buffer[10];
	ft_bzero(buffer, 3);
	printf("%s\n", buffer);
}*/	
