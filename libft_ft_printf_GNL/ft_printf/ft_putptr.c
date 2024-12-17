/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:42:35 by mmheidat          #+#    #+#             */
/*   Updated: 2024/01/15 16:53:41 by mmheidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	if (ptr == NULL)
		i += ft_putchar('0');
	else
		i += ft_puthex((unsigned long long)ptr, 'x');
	return (i);
}
