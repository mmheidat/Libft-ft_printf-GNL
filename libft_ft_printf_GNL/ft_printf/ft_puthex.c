/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:49:47 by mmheidat          #+#    #+#             */
/*   Updated: 2024/01/15 16:53:11 by mmheidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char sign)
{
	int	i;

	i = 0;
	if (n > 15)
	{
		i += ft_puthex(n / 16, sign);
		i += ft_puthex(n % 16, sign);
	}
	if (n >= 0 && n < 10)
		i += ft_putchar(n + '0');
	else if (n > 9 && n < 16)
	{
		if (sign == 'x')
			i += ft_putchar(n - 10 + 'a');
		else if (sign == 'X')
			i += ft_putchar(n - 10 + 'A');
	}
	return (i);
}
