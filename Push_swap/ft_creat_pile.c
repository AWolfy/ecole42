/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_pile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:23:54 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/21 17:07:00 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list	*ft_creat_pile(int argc, char **argv)
{
	t_list	*pile_a;
	int		a;

	a = 0;
	pile_a = ft_lstnew(ft_atoi(argv[a + 1]));
	while (a < argc - 1)
	{
		ft_lstadd_front(&pile_a, ft_lstnew(ft_atoi(argv[a + 1])));
		a = a + 1;
	}
	return (pile_a);
}
