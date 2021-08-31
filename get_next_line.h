/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gesperan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:39:06 by gesperan          #+#    #+#             */
/*   Updated: 2020/11/21 19:39:50 by gesperan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# define NEW_LINER '\n'
# define END_STRING '\0'
# define TRUE 1
# define FALSE -1
# define ENDLINE_TOUCHED 1
# define ENDLINE_NOT_FOUND 0
# define EOF_REACHED 0
# define ERROR -1

int				get_next_line(int fd, char **line);
int				finder(const char *str, const char c);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strdup(const char *s);
size_t			ft_strlen(const char *str);

#endif
