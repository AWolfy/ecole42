/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:29:55 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/21 17:34:32 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap_b(t_list **pile_b)
{
	t_list	*temp;

	temp = *pile_b;
	*pile_b = (*pile_b)->next;
	temp->next = (*pile_b)->next;
	(*pile_b)->next = temp;
}
