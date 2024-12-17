/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:37:00 by mmheidat          #+#    #+#             */
/*   Updated: 2024/01/07 13:34:58 by mmheidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free(char **str, int i)
{
	int	count;

	count = i;
	while (count >= 0)
	{
		if (str[count] == NULL)
		{
			while (i >= 0)
			{
				if (str[i] != NULL)
					free(str[i]);
				i--;
			}
			free(str);
			return (NULL);
		}
		count--;
	}
	return (str);
}

size_t	words(const char *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	count = 0;
	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && j == 0)
		{
			j = 1;
			count++;
		}
		else if (str[i] == c)
			j = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	**split;

	split = malloc((words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			split[i] = ft_substr(s - len, 0, len);
			i++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (ft_free(split, i - 1));
}
