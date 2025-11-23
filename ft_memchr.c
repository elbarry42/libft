/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:24:43 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/23 11:07:38 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_bis;

	i = 0;
	s_bis = (unsigned char *) s;
	while (i < n)
	{
		if (s_bis[i] == (unsigned char) c)
			return (&s_bis[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	unsigned char	src[] = "langage";
// 	printf ("%s \n", (char *) memchr(src, 'g', 4));
// 	printf ("%s", (char *) ft_memchr(src, 'g', 4));
// 	return (0);
// }