/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:36:42 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/14 18:34:53 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../lib/ft_Printf/ft_printf.h"
# include "../lib/libft/libft.h"
# include "../lib/Get_Next_Line/get_next_line.h"

void	get_action(t_list **a, t_list **b);
void	ft_pushs(t_list **a, t_list **b, char id);
void	ft_rotates(t_list **a, t_list **b, char id);
void	ft_rrotates(t_list **a, t_list **b, char id);
void	ft_swaps(t_list **a, t_list **b, char id);
void	setmoves(t_list **stack);
void	setrr(t_list **stack);
void	reindex(t_list *stack);
int		is_sort(t_list **a, t_list **b);

#endif 