/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:31:34 by beyarsla          #+#    #+#             */
/*   Updated: 2024/04/30 15:31:36 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	static int	inx;
	t_list		*p;

	p = malloc(sizeof(t_list));
	if (!p)
		return (0);
	p->inx = inx++;
	p->content = content;
	p->next = NULL;
	p->isrr = -1;
	p->moves = -1;
	p->target = NULL;
	return (p);
}
