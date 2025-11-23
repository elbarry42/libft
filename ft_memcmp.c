/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:26:13 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/23 10:27:19 by elbarry          ###   ########.fr       */
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

// #include <stdio.h>

// int	main(void)
// {
// 	unsigned char	s1[] = "barry";
// 	unsigned char	s2[] = "baRry";
// 	printf ("%d \n", memcmp(s1, s2, 4));
// 	printf ("%d", ft_memcmp(s1, s2, 4));
// 	return (0);
// }