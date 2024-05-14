/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 14:46:14 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/14 18:05:22 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_node(int index, t_list **stack)
{
	t_list	*tmp;

	tmp = (*stack);
	
	while (tmp)
	{
		if (tmp->index == index)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

int	biggest_index(t_list **stack)
{
	t_list	*tmp;
	int		max;
	int		index;

	tmp = (*stack);
	max = tmp->content;
	index = tmp->index;
	while (tmp)
	{
		if (tmp->content > max)
		{
			max = tmp->content;
			index = tmp->index;
		}
		tmp = tmp->next;
	}
	return (index);
}

int	smallest_index(t_list **stack)
{
	t_list	*tmp;
	int		min;
	int		index;

	tmp = (*stack);
	min = tmp->content;
	index = tmp->index;
	while (tmp)
	{
		if (tmp->content < min)
		{
			min = tmp->content;
			index = tmp->index;
		}
		tmp = tmp->next;
	}
	return (index);
}
