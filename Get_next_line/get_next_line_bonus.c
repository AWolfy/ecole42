/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:13:25 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/26 16:55:59 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*copy_to_token(char *buf)
{
	int		a;
	char	*end;

	if (buf == NULL || buf[0] == '\0')
		return (NULL);
	a = 0;
	while (buf[a] != '\0' && buf[a] != '\n')
		a = a + 1;
	end = malloc(sizeof(char) * (a + 2));
	if (end == NULL)
		return (NULL);
	a = 0;
	while (buf[a] != '\0' && buf[a] != '\n')
	{
		end[a] = buf[a];
		a = a + 1;
	}
	if (buf[a] == '\n')
	{
		end[a] = buf[a];
		a = a + 1;
	}
	end[a] = '\0';
	return (end);
}

void	ft_temp2(char *str, char *temp, int a)
{
	int	b;

	b = 0;
	while (temp[a] != '\0')
	{
		str[b] = temp[a];
		b = b + 1;
		a = a + 1;
	}
	str[b] = '\0';
}

char	*ft_temp(char *temp)
{
	char	*str;
	int		a;

	if (temp == NULL)
		return (NULL);
	a = 0;
	while (temp[a] != '\0' && temp[a] != '\n')
		a = a + 1;
	if (temp[a] == '\0')
	{
		free(temp);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(temp) - a));
	if (str == NULL)
		return (NULL);
	a = a + 1;
	ft_temp2(str, temp, a);
	free(temp);
	return (str);
}

char	*recup_file(int fd, char *str)
{
	int		a;
	char	*buf;

	a = 1;
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (buf == NULL)
	{
		free(buf);
		free(str);
		return (NULL);
	}
	while (a != 0 && !ft_strchr(str, '\n'))
	{
		a = read(fd, buf, BUFFER_SIZE);
		if (a == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[a] = '\0';
		str = ft_strjoin(str, buf);
	}
	free(buf);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*temp[257];
	char		*str;

	if (fd == -1 || BUFFER_SIZE <= 0 || fd >= 256)
		return (NULL);
	temp[fd] = recup_file(fd, temp[fd]);
	if (temp[fd] == NULL)
		return (NULL);
	str = copy_to_token(temp[fd]);
	return (str);
}
