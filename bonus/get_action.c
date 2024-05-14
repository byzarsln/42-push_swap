/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_action.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:09:03 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/14 18:15:36 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	print_error(t_list **a, t_list **b)
{
	if (a != NULL && b != NULL)
	{
		ft_lstclear(a, b);
		free(a);
		free(b);
	}
	ft_printf("Error\n");
	exit (1);
}

int	is_sort(t_list **a, t_list **b)
{
	t_list	*tmp;
	
	tmp = (*a);
	if (*b)
		print_error(a, b);
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_do_act(char *action, t_list **a, t_list **b)
{
	if (ft_strncmp(action, "sa\n", 3) == 0)
		ft_swaps(a, b, 'a');
	else if (ft_strncmp(action, "sb\n", 3) == 0)
		ft_swaps(a, b, 'b');
	else if (ft_strncmp(action, "ss\n", 3) == 0)
		ft_swaps(a, b, 'x');
	else if (ft_strncmp(action, "pa\n", 3) == 0)
		ft_pushs(a, b, 'a');
	else if (ft_strncmp(action, "pb\n", 3) == 0)
		ft_pushs(a, b, 'b');
	else if (ft_strncmp(action, "ra\n", 3) == 0)
		ft_rotates(a, b, 'a');
	else if (ft_strncmp(action, "rb\n", 3) == 0)
		ft_rotates(a, b, 'b');
	else if (ft_strncmp(action, "rr\n", 3) == 0)
		ft_rotates(a, b, 'x');
	else if (ft_strncmp(action, "rra\n", 4) == 0)
		ft_rrotates(a, b, 'a');
	else if (ft_strncmp(action, "rrb\n", 4) == 0)
		ft_rrotates(a, b, 'b');
	else if (ft_strncmp(action, "rrr\n", 4) == 0)
		ft_rrotates(a, b, 'x');
	else
		print_error(a, b);
}

void	get_action(t_list **a, t_list **b)
{
	char	*action;

	action = get_next_line(0);
	if (!action)
		return ;
	while (action)
	{
		ft_do_act(action, a, b);
		free(action);
		action = get_next_line(0);
	}
}