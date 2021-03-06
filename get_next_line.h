/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 11:39:54 by plaurent          #+#    #+#             */
/*   Updated: 2018/11/29 12:45:46 by plaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1

# include <stdlib.h>
# include <unistd.h>
# include <stdlib.h>

int		get_next_line(const int fd, char **line);
void		ft_putendl(char const *s);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strnew(size_t s);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strchr(const char *s, int c);
int		ft_strlen(char *str);
void		ft_putchar(char c);
void		ft_putstr(char const *str);
#endif
