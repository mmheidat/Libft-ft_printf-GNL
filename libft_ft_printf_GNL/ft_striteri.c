/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:46:54 by mmheidat          #+#    #+#             */
/*   Updated: 2024/01/07 13:35:21 by mmheidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((s) && (f))
	{
		i = ft_strlen(s);
		while (j < i)
		{
			(*f)(j, s);
			s++;
			j++;
		}
	}
}
