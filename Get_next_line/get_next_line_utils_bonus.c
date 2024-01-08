/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:13:29 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/11 12:15:57 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	if (s == NULL)
		return (0);
	c = 0;
	while (s[c] != '\0')
		c = c + 1;
	return (c);
}

char	*ft_strchr(char *s, int c)
{
	char	*str;
	int		a;

	if (s == NULL)
		return (0);
	a = 0;
	str = s;
	if (c == 0)
		return (&str[ft_strlen(s)]);
	while (str[a] != '\0')
	{
		if (c % 256 == str[a])
			return (&str[a]);
		a = a + 1;
	}
	return (NULL);
}

void	ft_strjoin2(char *dest, char *s1, char *s2)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s1[a] != '\0')
	{
		dest[a] = s1[a];
		a = a + 1;
	}
	while (s2[b] != '\0')
	{
		dest[a] = s2[b];
		a = a + 1;
		b = b + 1;
	}
	dest[a] = '\0';
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dest;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	ft_strjoin2(dest, s1, s2);
	free(s1);
	return (dest);
}
