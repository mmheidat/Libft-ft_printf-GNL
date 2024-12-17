/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:47:23 by mmheidat          #+#    #+#             */
/*   Updated: 2024/01/17 10:55:23 by mmheidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strfinder(va_list sign, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(sign, int));
	else if (c == 's')
		i += ft_putstr(va_arg(sign, char *));
	else if (c == 'p')
		i += ft_putptr(va_arg(sign, void *));
	else if (c == 'i' || c == 'd')
		i += ft_putnum(va_arg(sign, int));
	else if (c == 'u')
		i += ft_putint(va_arg(sign, unsigned int));
	else if (c == 'x' || c == 'X')
		i += ft_puthex(va_arg(sign, unsigned int), c);
	else if (c == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		j;
	va_list	sign;

	i = 0;
	j = 0;
	va_start(sign, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			j += ft_strfinder(sign, str[i]);
		}
		else
		{
			j += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(sign);
	return (j);
}
