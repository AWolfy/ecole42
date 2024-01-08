/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:51:18 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/21 16:28:19 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list	*ft_lstnew(int nbr)
{
	t_list	*list;

	list = malloc(sizeof(t_list) * 1);
	if (list == NULL)
		return (NULL);
	list->nbr = nbr;
	list->next = NULL;
	return (list);
}
