/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:00:06 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/21 17:25:03 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*list;
	int		b;

	if (argc == 0 || argc == 1)
		return (0);
	list = ft_creat_pile(argc, argv);
	/*	debut de la partie pour lire la pile, pas obligatoire	*/
	b = 0;
	ft_swap_a(&list);
	while (b < argc - 1)
	{
		printf("list[%d] = %d\n", b, list->nbr);
		list = list->next;
		b = b + 1;
	}
	/*	fin	de la partie pour lire la pile, pas obligatoire		*/
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	int	*tab;
// 	int	a;
// 	int	b;

// 	if (argc == 0 || argc == 1)
// 		return (0);
// 	a = 0;
// 	tab = malloc(sizeof(int) * (argc - 1));
// 	while (a < argc - 1)
// 	{
// 		tab[a] = ft_atoi(argv[a + 1]);
// 		a = a + 1;
// 	}
// 	tab = trie_tab(tab, argc);
// 	b = 0;
// 	while (b < argc - 1)
// 	{
// 		printf("tab[%d]\n", tab[b]);
// 		b = b + 1;
// 	}
// 	return (0);
// }
