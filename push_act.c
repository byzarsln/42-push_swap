/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_act.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:47:47 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 16:24:52 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (id == 'a' && ft_printf("%s", "pa\n"))
		push_a(a, b);
	else if (id == 'b' && ft_printf("%s", "pb\n"))
		push_b(a, b);
}
