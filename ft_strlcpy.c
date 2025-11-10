/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:47:46 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/10 16:36:09 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, int size)
{
	int	i;
	int	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	d[] = "barry";
	char	s[] = "elhadj";
	int	taille = sizeof(d);
	printf ("%zu \n", strlcpy(d, s, taille));
	printf ("%d", ft_strlcpy(d, s, taille));
	return (0);
}