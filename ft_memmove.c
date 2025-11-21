/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:47:21 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/21 19:06:51 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*cpy_src;
	unsigned char	*cpy_dest;

	i = 0;
	cpy_src = (unsigned char *) src;
	cpy_dest = (unsigned char *) dest;
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

// #include <stdio.h>

// int	main(void)
// {
// 	unsigned char	dest[] = "barry";
// 	unsigned char	src[] = "elhadj";
// 	printf ("%s \n", (char *) memmove(dest, src, 4));
// 	printf ("%s", (char *) ft_memmove(dest, src, 4));
// 	return (0);
// }