/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:47:21 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/24 12:49:59 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cpy_src;
	unsigned char	*cpy_dest;

	if (!dest && !src)
		return (NULL);
	cpy_src = (unsigned char *) src;
	cpy_dest = (unsigned char *) dest;
	i = 0;
	if (dest > src)
	{
		while (i < n)
		{
			cpy_dest[n - i - 1] = cpy_src[n - i - 1];
			i++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
