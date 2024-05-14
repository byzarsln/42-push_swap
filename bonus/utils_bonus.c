/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:27:56 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/14 18:28:30 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	reindex(t_list *stack)
{
	int		i;
	t_list	*tmp;

	tmp = stack;
	i = 0;
	while(tmp)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}

void	setrr(t_list **stack)
{
	t_list *tmp;
	
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
	while(tmp)
	{
		if (tmp->isrr == 0)
			tmp->moves = tmp->index;
		else
		{
			tmp->moves = ft_lstsize(*stack) - tmp->index;
		}
		tmp = tmp->next;
	}
}
