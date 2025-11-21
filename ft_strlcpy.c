/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:47:46 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/21 17:19:45 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char	d[] = "barry";
// 	char	s[] = "elhadj";
// 	int	taille = sizeof(d);
// 	printf ("%zu \n", strlcpy(d, s, taille));
// 	printf ("%zu", ft_strlcpy(d, s, taille));
// 	return (0);
// }