/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:04:24 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 16:29:33 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_nbr(t_list *a)
{
	int	min;

	min = a->content;
	a = a->next;
	while (a)
	{
		if (min > a->content)
			min = a->content;
		a = a->next;
	}
	return (min);
}

void	reindex(t_list *stack)
{
	int		i;
	t_list	*tmp;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}

void	setrr(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->index <= (ft_lstsize((*stack)) / 2))
			tmp->isrr = 0;
		else
			tmp->isrr = 1;
		tmp = tmp->next;
	}
}

void	setmoves(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->isrr == 0)
			tmp->moves = tmp->index;
		else
			tmp->moves = ft_lstsize(*stack) - tmp->index;
		tmp = tmp->next;
	}
}
