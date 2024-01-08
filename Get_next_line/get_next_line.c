/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:34:01 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/23 12:15:15 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

	a = 0;
	while (temp[a] != '\0' && temp[a] != '\n')
		a = a + 1;
	if (temp[a] == '\0')
	{
		free(temp);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(temp) - a + 1));
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
	static char	*temp;
	char		*str;

	if (fd == -1 || fd >= 10)
		return (NULL);
	temp = recup_file(fd, temp);
	if (temp == NULL)
		return (NULL);
	str = copy_to_token(temp);
	temp = ft_temp(temp);
	return (str);
}

// int	main(void)
// {
// 	int	fd;

// 	printf("%s\n\n", get_next_line(1000));

// 	printf("%s\n\n", get_next_line(-1));

// 	fd = open("test.txt", O_RDWR);
// 	printf("%s\n\n", get_next_line(fd));

// 	close(fd);
// 	return (0);
// }
