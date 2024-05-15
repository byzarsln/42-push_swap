/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:13:41 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 16:22:56 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	uniqe_cont(t_list *a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = a;
	while (tmp2)
	{
		tmp = tmp2->next;
		while (tmp)
		{
			if (tmp2->content == tmp->content)
				print_free_a(a);
			tmp = tmp->next;
		}
		tmp2 = tmp2->next;
	}
}

void	argcont(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '+' || argv[i][j] == '-')
			{
				if (argv[i][j + 1] >= '0' && argv[i][j + 1] <= '9')
					j++;
				else
				{
					ft_printf("Error\n");
					exit(1);
				}
			}
			j++;
		}
	}
}

void	intcont(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		if (!argv[i][j] && ft_printf("Error\n"))
			exit(1);
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) &&
				argv[i][j] != ' ' && ft_printf("Error\n"))
				exit(1);
			j++;
		}
	}
}

void	onlyspace(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			if (ft_isdigit(argv[i][j]))
				return ;
		}
	}
	ft_printf("Error\n");
	exit(1);
}
