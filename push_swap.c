/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:51:21 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/18 13:59:27 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_cont(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return ;
		tmp = tmp->next;
	}
	print_free_a(a);
}

void	addstack(t_list **a, char **arg_list)
{
	int	i;

	i = -1;
	while (arg_list[++i])
		ft_lstadd_back(a, ft_lstnew(ft_atoi(arg_list[i])));
}

char	**argvsplit(char **argv)
{
	int		i;
	char	**all_list;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (argv[++i])
		tmp = ft_strjoin(tmp, argv[i]);
	all_list = ft_split(tmp, ' ');
	free(tmp);
	return (all_list);
}

void	dispose_arg_list(char **arg_list)
{
	int	i;

	i = -1;
	while (arg_list[++i])
		free(arg_list[i]);
	free(arg_list);
}

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;
	char	**arg_list;

	if (argc < 2)
		return (0);
	onlyspace(argv);
	intcont(argv);
	argcont(argv);
	a = malloc(sizeof(t_list *) * argc - 1);
	b = malloc(sizeof(t_list *) * argc - 1);
	arg_list = argvsplit(argv);
	addstack(a, arg_list);
	dispose_arg_list(arg_list);
	uniqe_cont(*a);
	sort_cont(*a);
	ft_sort(a, b, ft_lstsize(*a));
	ft_lstclear(a, b);
	free (a);
	free (b);
}
