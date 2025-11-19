/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:46:46 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/19 17:47:38 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*cpy_src;
	unsigned char	*cpy_dest;
	
	i = 0;
	cpy_dest = (unsigned char *) dest;
	cpy_src = (unsigned char *) src;
	while (i < n)
	{
		cpy_dest[i] = cpy_src[i];
		i++;
	}
	return (dest);
}
#include <stdio.h>

int	main(void)
{
	unsigned char	dest[] = "barry";
	unsigned char	src[] = "elhadj";
	printf ("%s \n", (char *) memcpy(dest, src, 4));
	printf ("%s", (char *) ft_memcpy(dest, src, 4));
	return (0);
}