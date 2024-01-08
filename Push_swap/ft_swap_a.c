/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:22:24 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/21 17:23:58 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap_a(t_list **pile_a)
{
	t_list	*temp;

	temp = *pile_a;
	*pile_a = (*pile_a)->next;
	temp->next = (*pile_a)->next;
	(*pile_a)->next = temp;
}
