/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:13:16 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/15 15:48:10 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(char *s, int c);
void	ft_strjoin2(char *dest, char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2);
char	*copy_to_token(char *buf);
void	ft_temp2(char *str, char *temp, int a);
char	*ft_temp(char *temp);
char	*recup_file(int fd, char *str);
char	*get_next_line(int fd);

#endif
