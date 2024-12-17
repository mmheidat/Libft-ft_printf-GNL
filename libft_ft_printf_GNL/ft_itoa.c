/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:03:10 by mmheidat          #+#    #+#             */
/*   Updated: 2024/01/07 13:37:08 by mmheidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	length(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*total;
	long	i;

	len = length(n);
	i = n;
	total = (char *)malloc(len + 1);
	if (!total)
		return (0);
	if (i < 0)
	{
		total[0] = '-';
		i = -i;
	}
	if (i == 0)
		total[0] = '0';
	total[len--] = '\0';
	while (i)
	{
		total[len] = i % 10 + '0';
		len--;
		i = i / 10;
	}
	return (total);
}
