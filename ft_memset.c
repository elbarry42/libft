/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:45:56 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/21 19:05:34 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_bis;

	i = 0;
	s_bis = (unsigned char *) s;
	while (i < n && s_bis[i])
	{
		s_bis[i] = c;
		i++;
	}
	return (s_bis);
}

// #include <stdio.h>

// int	main(void)
// {
// 	unsigned char s[20] = "AAAAAAAA";
// 	printf("%s", (char *) ft_memset(s, 'G', 20));
// 	return (0);
// }