/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:32:05 by beyarsla          #+#    #+#             */
/*   Updated: 2024/04/30 15:32:06 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (dest[i] && src[i] && dest[i] == src[i] && i < n - 1)
		i++;
	return ((unsigned char)dest[i] - (unsigned char)src[i]);
}
