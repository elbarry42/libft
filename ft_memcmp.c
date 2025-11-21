/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:26:13 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/21 19:09:26 by elbarry          ###   ########.fr       */
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
	while (i < n && s1_bis[i] == s2_bis[i] && s1_bis[i])
		i++;
	if (i < n)
		return (s1_bis[i] - s2_bis[i]);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	unsigned char	s1[] = "barry";
// 	unsigned char	s2[] = "baRry";
// 	printf ("%d \n", memcmp(s1, s2, 4));
// 	printf ("%d", ft_memcmp(s1, s2, 4));
// 	return (0);
// }