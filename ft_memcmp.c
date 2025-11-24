/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:26:13 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/24 12:49:49 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;

	i = 0;
	s1_bis = (unsigned char *) s1;
	s2_bis = (unsigned char *) s2;
	while (s1_bis[i] == s2_bis[i] && n != 0 && (i < n - 1))
		i++;
	if (i == n)
		return (0);
	return (s1_bis[i] - s2_bis[i]);
}
