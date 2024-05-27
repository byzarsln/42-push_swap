/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:27:56 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/18 14:03:57 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
