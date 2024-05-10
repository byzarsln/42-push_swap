/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:04:24 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/10 18:38:40 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_nbr(t_list **a)
{
	int min;

	min = (*a)->content;
	(*a) = (*a)->next;
	while ((*a))
	{
		 if (min > (*a)->content)
		 	min = (*a)->content;
		(*a) = (*a)->next;
	}
	return (min);
}
