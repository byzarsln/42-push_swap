/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_act.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:32:52 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 16:28:10 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if ((id == 'a') && ft_printf("%s", "sa\n"))
		swap_func_a(a);
	else if ((id == 'b') && ft_printf("%s", "sb\n"))
		swap_func_b(b);
	else if ((id == 'x') && ft_printf("%s", "ss\n"))
	{
		swap_func_a(a);
		swap_func_b(b);
	}
}
