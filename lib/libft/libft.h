/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:32:16 by beyarsla          #+#    #+#             */
/*   Updated: 2024/04/30 15:39:04 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

typedef struct s_list
{
	int				inx;
	int				moves;
	int				content;
	int				isrr;
	struct s_list	*next;
	struct s_list	*target;
}					t_list;

t_list				*ft_lstnew(int content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstclear(t_list **a, t_list **b);
long				ft_atoi(const char *str);
int					ft_isdigit(char c);
size_t				ft_strlen(const char *s);
void				ft_swap(int *a, int *b);
char				*ft_strjoin(char *s1, char *s2);
char				**ft_split(char const *s, char c);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
int					ft_strncmp(const char *dest, const char *src, size_t n);

#endif