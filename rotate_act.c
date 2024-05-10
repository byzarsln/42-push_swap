/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_act.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:49:01 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/10 17:37:03 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (id == 'a' && ft_printf("%s", "ra\n"))
		rotate_a(a);
	else if (id == 'b' && ft_printf("%s", "rb\n"))
		rotate_b(b);
	else if (id == 'x' && ft_printf("%s", "rr\n"))
	{
		rotate_a(a);
		rotate_b(b);
	}
}