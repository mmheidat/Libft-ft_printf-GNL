/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:58:12 by mmheidat          #+#    #+#             */
/*   Updated: 2024/02/09 20:22:24 by mmheidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

char		*ft_next_str(char *str);
size_t		ft_strlen(char *s);
char		*ft_strchr(char *s, int c);
char		*ft_strjoin(char *old_str, char *buff);
char		*ft_line(char *str);
char		*get_next_line(int fd);
char		*ft_read(int fd, char *str);

#endif