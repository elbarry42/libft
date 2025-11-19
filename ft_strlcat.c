/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:37:33 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/19 17:51:10 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dest_len = 0;
	while (dst[dest_len])
		dest_len++;
	if (size <= dest_len)
		return (src_len + size);
	i = 0;
	while (src[i] && (dest_len + i) < (size - 1))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (src_len + dest_len);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	d[] = "barry";
	char	s[] = "elhadj";
	int	taille = sizeof(d);
	printf ("%zu \n", strlcat(d, s, taille));
	printf ("%zu", ft_strlcat(d, s, taille));
	return (0);
}