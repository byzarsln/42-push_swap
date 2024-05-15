/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_bonus_act.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:33:44 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 14:24:37 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rrotate_b(t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*b) || !(*b)->next)
		return ;
	tmp = *b;
	tmp2 = *b;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	*b = tmp2->next;
	tmp2->next = NULL;
	(*b)->next = tmp;
}

void	rrotate_a(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	tmp2 = *a;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	*a = tmp2->next;
	tmp2->next = NULL;
	(*a)->next = tmp;
}

void	ft_rrotates(t_list **a, t_list **b, char id)
{
	if (id == 'a')
		rrotate_a(a);
	else if (id == 'b')
		rrotate_b(b);
	else if (id == 'x')
	{
		rrotate_a(a);
		rrotate_b(b);
	}
}
