/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:01:32 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/21 17:09:01 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
	str++;
	}
	return (i);
}

static char	*word_dup(const char *string, int start, int finish)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (finish - start + 2));
	if (!word)
		return (NULL);
	while (start < finish + 1)
	{
		word[i++] = string[start++];
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		start;
	int		finish;
	size_t	index;
	int		splitcount;

	split = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	splitcount = 0;
	index = 0;
	start = 0;
	if (!split || !s)
		return (NULL);
	while (index < strlen(s))
	{
		if (s[index] != c && (s[index - 1] == c))
			start = index;
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
		{
			finish = index;
			split[splitcount++] = word_dup(s, start, finish);
		}
	index++;
	}
	split[splitcount] = 0;
	return (split);
}
