/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:36:22 by beyarsla          #+#    #+#             */
/*   Updated: 2024/05/15 16:33:05 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

void	dispose_arg_list(char **arg_list)
{
	int	i;

	i = -1;
	while (arg_list[++i])
		free(arg_list[i]);
	free (arg_list);
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
	unique_cont(*a);
	sort_cont(*a);
	get_action(a, b);
	if (is_sort(a, b) == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_lstclear(a, b);
	free (a);
	free (b);
}
