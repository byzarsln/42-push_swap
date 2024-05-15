/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:07:48 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 16:24:26 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **a)
{
	int	a1;
	int	a2;
	int	a3;

	a1 = (*a)->content;
	a2 = (*a)->next->content;
	a3 = (*a)->next->next->content;
	if (!*a || !(*a)->next || !(*a)->next->next)
		return ;
	if (a1 < a2 && a1 < a3 && a2 > a3)
	{
		ft_rrotates(a, NULL, 'a');
		ft_swaps(a, NULL, 'a');
	}
	else if (a1 > a2 && a1 < a3 && a2 < a3)
		ft_swaps(a, NULL, 'a');
	else if (a1 < a2 && a1 > a3 && a2 > a3)
		ft_rrotates(a, NULL, 'a');
	else if (a1 > a2 && a1 > a3 && a2 < a3)
		ft_rotates(a, NULL, 'a');
	else if (a1 > a2 && a1 > a3 && a2 > a3)
	{
		ft_rotates(a, NULL, 'a');
		ft_swaps(a, NULL, 'a');
	}
}

void	sort_four(t_list **a, t_list **b)
{
	int	min;
	int	i;

	i = 0;
	min = find_min_nbr(*a);
	while (i < 1)
	{
		if (min == (*a)->content)
		{
			ft_pushs(a, b, 'b');
			i++;
		}
		else
		{
			if (ft_lstlast(*a)->content == min)
				ft_rrotates(a, b, 'a');
			else
				ft_rotates(a, b, 'a');
		}
	}
	sort_three(a);
	ft_pushs(a, b, 'a');
}

void	sort_five(t_list **a, t_list **b)
{
	int	i;
	int	min;

	i = 0;
	min = find_min_nbr(*a);
	while (i < 1)
	{
		if ((*a)->content == min)
		{
			ft_pushs(a, b, 'b');
			i++;
		}
		else
		{
			if (ft_lstlast(*a)->content == min)
				ft_rrotates(a, b, 'a');
			else
				ft_rotates(a, b, 'a');
		}
	}
	sort_four(a, b);
	ft_pushs(a, b, 'a');
}

void	ft_sort(t_list **a, t_list **b, int size)
{
	if (size == 2)
		ft_swaps(a, b, 'a');
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
	else
	{
		setrr(a);
		setmoves(a);
		setmoves(b);
		bigsort(a, b);
	}
}
