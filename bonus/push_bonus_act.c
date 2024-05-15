/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus_act.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:32:08 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 16:32:07 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	push_b(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*a))
		return ;
	tmp2 = (*a);
	tmp = (*a)->next;
	tmp2->next = (*b);
	(*b) = tmp2;
	(*a) = tmp;
	reindex((*a));
	reindex((*b));
	setrr(a);
	setrr(b);
	setmoves(a);
	setmoves(b);
}

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*b))
		return ;
	tmp = (*b);
	tmp2 = (*b)->next;
	tmp->next = (*a);
	(*b) = tmp2;
	(*a) = tmp;
	reindex((*a));
	reindex((*b));
	setrr(a);
	setrr(b);
	setmoves(a);
	setmoves(b);
}

void	ft_pushs(t_list **a, t_list **b, char id)
{
	if (id == 'a')
		push_a(a, b);
	else if (id == 'b')
		push_b(a, b);
}
