/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:00:44 by mmheidat          #+#    #+#             */
/*   Updated: 2024/02/12 13:52:40 by mmheidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *old_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!old_str)
	{
		old_str = (char *)malloc(1 * sizeof(char));
		old_str[0] = '\0';
	}
	if (!old_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(old_str) + ft_strlen(buff)) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	if (old_str)
		while (old_str[++i] != '\0')
			str[i] = old_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(old_str) + ft_strlen(buff)] = '\0';
	free(old_str);
	return (str);
}

char	*ft_line(char *str)
{
	int		i;
	char	*tab;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	tab = (char *)malloc(sizeof(char) * (i + 2));
	if (!tab)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		tab[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
