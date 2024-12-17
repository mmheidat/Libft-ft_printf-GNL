/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:40:15 by mmheidat          #+#    #+#             */
/*   Updated: 2024/01/15 17:01:31 by mmheidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int			ft_printf(const char *str, ...);
int			ft_putnum(int n);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_putint(unsigned int n);
int			ft_puthex(unsigned long long n, char sign);
int			ft_putptr(void *ptr);

#endif