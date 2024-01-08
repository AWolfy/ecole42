/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agleizes <agleizes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:17:01 by agleizes          #+#    #+#             */
/*   Updated: 2023/12/21 17:36:13 by agleizes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				nbr;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *nptr);
t_list				*ft_creat_pile(int argc, char **argv);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstnew(int nbr);
void				ft_swap_a(t_list **pile_a);
void				ft_swap_b(t_list **pile_b);
int					*trie_tab(int *tab, int argc);

#endif
