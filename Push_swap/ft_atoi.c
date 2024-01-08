/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:16:38 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/21 14:52:44 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_atoi(const char *nptr)
{
	int	a;
	int	token;
	int	nbr;

	a = 0;
	token = 1;
	nbr = 0;
	if (nptr[a] == '\0')
		return (0);
	while ((nptr[a] <= 13 && nptr[a] >= 9) || nptr[a] == 32)
		a = a + 1;
	if (nptr[a] == '-')
	{
		token = -token;
		a = a + 1;
	}
	else if (nptr[a] == '+')
		a = a + 1;
	while (nptr[a] >= '0' && nptr[a] <= '9')
	{
		nbr = (nbr * 10) + (nptr[a] - '0');
		a = a + 1;
	}
	nbr = nbr * token;
	return (nbr);
}

/*
int	main(void)
{
	printf("atoi = %d\n", ft_atoi(" ---+---+1234ab567"));
	return (0);
}
*/
