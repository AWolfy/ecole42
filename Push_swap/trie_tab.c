/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:54:41 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/21 16:20:57 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	*trie_tab(int *tab, int argc)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	while (a != argc - 1)
	{
		b = a;
		while (b != argc - 1)
		{
			if (tab[a] > tab[b])
			{
				temp = tab[a];
				tab[a] = tab[b];
				tab[b] = temp;
			}
			b = b + 1;
		}
		a = a + 1;
	}
	return (tab);
}
