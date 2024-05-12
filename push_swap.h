/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:06:30 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/12 19:55:33 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "lib/ft_Printf/ft_printf.h"
# include "lib/libft/libft.h"

void	ft_sort(t_list **a, t_list **b, int size);
void	ft_swaps(t_list **a, t_list **b, char id);
void	ft_rrotates(t_list **a, t_list **b, char id);
void	ft_rotates(t_list **a, t_list **b, char id);
int		find_min_nbr(t_list *a);
void	ft_pushs(t_list **a, t_list **b, char id);
void	reindex(t_list *stack);
void	setrr(t_list **stack);
void	setmoves(t_list **stack);
void	bigsort(t_list **a, t_list **b);
int		smallest_index(t_list **b);
t_list	*get_node(int index, t_list **stack);
int		biggest_index(t_list **stack);
void	rotate_same_rr(t_list **a, t_list **b, t_list *tmp);
void	rotate_tmp(t_list **a, t_list **b, t_list *tmp);
void	rrotate_tmp(t_list **a, t_list **b, t_list *tmp);
void	laststep(t_list **a, t_list **b);

#endif