/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:26:13 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/18 12:51:49 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;

	i = 0;
	s1_bis = (unsigned char *) s1;
	s2_bis = (unsigned char *) s2;
	while (i < n && s1_bis[i] == s2_bis[i] && s1_bis[i])
		i++;
	if (i < n)
		return (s1_bis[i] - s2_bis[i]);
	return (0);
}