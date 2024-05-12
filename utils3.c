/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:44:00 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/12 20:12:50 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	laststep(t_list **a, t_list **b)
{
	while (get_node(biggest_index(b), b)->moves)
	{
		if (get_node(biggest_index(b), b)->isrr == 1)
			ft_rrotates(a, b, 'b');
		else
			ft_rotates(a, b, 'b');
		get_node(biggest_index(b), b)->moves--;
	}
	while (*b)
		ft_pushs(a, b, 'a');
}

void	rrotate_tmp(t_list **a, t_list **b, t_list *tmp)
{
	while (tmp->target->moves && tmp->moves)
	{
		ft_rrotates(a, b, 'x');
		tmp->moves--;
		tmp->target->moves--;
	}
	while (tmp->moves)
	{
		ft_rrotates(a, b, 'a');
		tmp->moves--;
	}
	while (tmp->target->moves)
	{
		ft_rrotates(a, b, 'b');
		tmp->target->moves--;
	}
}

void	rotate_tmp(t_list **a, t_list **b, t_list *tmp)
{
	while (tmp->target->moves && tmp->moves)
	{
		ft_rotates(a, b, 'x');
		tmp->moves--;
		tmp->target->moves--;
	}
	while (tmp->moves)
	{
		ft_rotates(a, b, 'a');
		tmp->moves--;
	}
	while (tmp->target->moves)
	{
		ft_rotates(a, b, 'b');
		tmp->target->moves--;
	}
}

void	rotate_same_rr(t_list **a, t_list **b, t_list *tmp)
{
	while (tmp->isrr == 0 && tmp->moves)
	{
		ft_rotates(a, b, 'a');
		tmp->moves--;
	}
	while (tmp->target->isrr == 0 && tmp->target->moves)
	{
		ft_rotates(a, b, 'b');
		tmp->target->moves--;
	}
	while (tmp->isrr == 1 && tmp->moves)
	{
		ft_rrotates(a, b, 'a');
		tmp->moves--;
	}
	while (tmp->target->isrr == 1 && tmp->target->moves)
	{
		ft_rrotates(a, b, 'b');
		tmp->target->moves--;
	}
}
