/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus_act.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:34:28 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 16:33:46 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_func_a(t_list **a)
{
	t_list	*tmp;

	if (!(*a) || !(*a)->next)
		return ;
	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = (*a);
	(*a) = tmp;
}

void	swap_func_b(t_list **b)
{
	t_list	*tmp;

	if (!(*b) || !(*b)->next)
		return ;
	tmp = (*b)->next;
	(*b)->next = tmp->next;
	tmp->next = (*b);
	(*b) = tmp;
}

void	ft_swaps(t_list **a, t_list **b, char id)
{
	if (id == 'a')
		swap_func_a(a);
	else if (id == 'b')
		swap_func_b(b);
	else if (id == 'x')
	{
		swap_func_a(a);
		swap_func_b(b);
	}
}
