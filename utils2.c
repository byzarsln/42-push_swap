/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 14:46:14 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 16:29:56 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_free_a(t_list *a)
{
	t_list	*tmp;

	while (a)
	{
		tmp = a->next;
		free(a);
		a = tmp;
	}
	free(a);
	ft_printf("Error\n");
	exit (1);
}

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
