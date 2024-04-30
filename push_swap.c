/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:51:21 by beyarsla          #+#    #+#             */
/*   Updated: 2024/04/30 20:08:50 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**argvsplit(char **argv)
{
	int		i;
	char 	**temp;

	i = 0;
	while(argv[++i])
		temp = ft_split(argv[i], ' ');
	return(temp);
}

void	addstack(t_list **a, char **argv)
{
	;
}

void	argcont(char **argv)
{
	int i;
	int j;

	i = 0;
	while(argv[++i])
	{
		j = 0;
		while(argv[i][j])
		{
			if(argv[i][j] == '+' || argv[i][j] == '-')
			{
				if(argv[i][j + 1] >= '0' && argv[i][j + 1] <= '9')
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
	int j;
	
	i = 0;
	while(argv[++i])
	{
		j = 0;
		if(!argv[i][j] && ft_printf("Error\n"))
			exit(1);
		while(argv[i][j])
		{
			if(!ft_isdigit(argv[i][j]) && argv[i][j] != ' ' && ft_printf("Error\n"))
				exit(1);
			j++;
		}
		ft_atoi(argv[i]);
	}
}

void	onlyspace(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while(argv[++i])
	{
		j = -1;
		while(argv[i][++j])
		{
			if(ft_isdigit(argv[i][j]) || argv[i][j] == '+' || argv[i][j] == '-')
				return ;
		}
	}
	ft_printf("Error\n");
	exit(1);
}


int main(int argc, char **argv)
{
	int		i;
	int		j;
	t_list	**a;
	t_list	**b;
	char	**tmp;

	i = 0;
	j = 0;
	if(argc < 2)
		return (0);
	else
	{
		onlyspace(argv);
		intcont(argv);
		argcont(argv);
		a = malloc(sizeof(t_list *) * argc - 1);
		b = malloc(sizeof(t_list *) * argc - 1);
		tmp = argvsplit(argv);
		addstack(a, argv);
		
	}
}