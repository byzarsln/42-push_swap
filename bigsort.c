/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:41:10 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/11 18:08:49 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	gettarget(t_list **a, t_list **b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = (*a);
	tmp_b = (*b);
	while (tmp_a)
	{
		
	}
}

void	bigsort(t_list **a, t_list **b)
{
	t_list	*tmp;

	ft_pushs(a, b, 'b');
	ft_pushs(a, b, 'b');
	
	while(*a)
	{
		gettarget(a, b);
	}
}