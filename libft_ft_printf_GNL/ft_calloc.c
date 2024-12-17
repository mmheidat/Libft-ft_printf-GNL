/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:09:33 by mmheidat          #+#    #+#             */
/*   Updated: 2024/01/11 11:56:39 by mmheidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	if (size && (count > (SIZE_MAX / size)))
		return (0);
	i = size * count;
	ptr = malloc(i);
	if (!ptr)
		return (0);
	ft_bzero(ptr, i);
	return (ptr);
}
