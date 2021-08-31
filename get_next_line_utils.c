/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gesperan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:40:35 by gesperan          #+#    #+#             */
/*   Updated: 2020/11/21 19:40:40 by gesperan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			finder(const char *str, const char c)
{
	int		column;

	column = 0;
	while (str[column] != '\0')
	{
		if (str[column] == c)
			return (column);
		column++;
	}
	return (FALSE);
}

char		*ft_strdup(const char *source)
{
	int		i;
	char	*newstring;

	i = 0;
	newstring = (char*)malloc(sizeof(char) * ft_strlen(source) + 1);
	if (newstring == NULL)
	{
		return (NULL);
	}
	while (source[i])
	{
		newstring[i] = source[i];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*newstring;
	size_t	size;
	size_t	len1;
	size_t	len2;
	size_t	index;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	index = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	size = len1 + len2;
	if (!(newstring = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s1[index])
	{
		newstring[index] = s1[index];
		index++;
	}
	index = 0;
	while (s2[index])
		newstring[len1++] = s2[index++];
	newstring[len1] = '\0';
	return (newstring);
}

size_t		ft_strlen(const char *str)
{
	size_t count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
