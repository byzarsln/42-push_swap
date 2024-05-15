/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:41:10 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 16:21:28 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_min_moves(t_list **a)
{
	t_list	*tmp;
	t_list	*return_tmp;

	tmp = (*a);
	return_tmp = tmp;
	while (tmp)
	{
		if (tmp->target->moves + tmp->moves
			< return_tmp->target->moves + return_tmp->moves)
			return_tmp = tmp;
		else if (tmp->target->moves + tmp->moves
			== return_tmp->target->moves + return_tmp->moves)
		{
			if (tmp->target->isrr == return_tmp->target->isrr
				&& return_tmp->isrr != return_tmp->target->isrr)
				return_tmp = tmp;
		}
		tmp = tmp->next;
	}
	return (return_tmp);
}

void	gettarget(t_list **a, t_list **b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = (*a);
	tmp_b = (*b);
	while (tmp_a)
	{
		tmp_a->target = get_node(smallest_index(b), b);
		while (tmp_b)
		{
			if (tmp_a->content > tmp_b->content
				&& tmp_a->target->content < tmp_b->content)
				tmp_a->target = tmp_b;
			tmp_b = tmp_b->next;
		}
		if (tmp_a->target->content > tmp_a->content)
			tmp_a->target = get_node(biggest_index(b), b);
		tmp_b = *b;
		tmp_a = tmp_a->next;
	}
}

void	bigsort(t_list **a, t_list **b)
{
	t_list	*tmp;

	ft_pushs(a, b, 'b');
	ft_pushs(a, b, 'b');
	while (*a)
	{
		gettarget(a, b);
		tmp = get_min_moves(a);
		if (tmp->isrr != tmp->target->isrr)
			rotate_same_rr(a, b, tmp);
		else if (tmp->isrr == tmp->target->isrr)
		{
			if (tmp->isrr == 0)
				rotate_tmp(a, b, tmp);
			else
				rrotate_tmp(a, b, tmp);
		}
		ft_pushs(a, b, 'b');
	}
	laststep(a, b);
}
