/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus_act.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:32:58 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 16:33:22 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotate_b(t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*b) || !(*b)->next)
		return ;
	tmp = *b;
	tmp2 = *b;
	while (tmp2->next)
		tmp2 = tmp2->next;
	(*b) = (*b)->next;
	tmp2->next = tmp;
	tmp2->next->next = NULL;
}

void	rotate_a(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*a) || !(*a)->next)
		return ;
	tmp = *a;
	tmp2 = *a;
	while (tmp2->next)
		tmp2 = tmp2->next;
	*a = (*a)->next;
	tmp2->next = tmp;
	tmp2->next->next = NULL;
}

void	ft_rotates(t_list **a, t_list **b, char id)
{
	if (id == 'a')
		rotate_a(a);
	else if (id == 'b')
		rotate_b(b);
	else if (id == 'x')
	{
		rotate_a(a);
		rotate_b(b);
	}
}
