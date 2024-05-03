/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:07:48 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/03 19:30:08 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_func_a(t_list *a)
{
	t_list *tmp;
	
}

void	ft_swaps(t_list **a, t_list **b, char id)
{
	if (id = 'a' && ft_printf("%s", "sa\n"))
		swap_func_a(*a);
	if (id = 'b' && ft_printf("%s", "sb\n"))
		swap_func_b(*b);
	if (id = 'x' && ft_printf("%s", "ss\n"))
	{
		swap_func_a(a);
		swap_func_b(b);
	}
}

void	ft_sort(t_list **a, t_list **b, int size)
{
	if (size == 2)
		ft_swaps(a, b, 'a');
}