/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:50:00 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/23 11:08:40 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	s1_cpy = (unsigned char *) s1;
	s2_cpy = (unsigned char *) s2;
	if (n == 0)
		return (0);
	i = 0;
	while (s1_cpy[i] && s2_cpy[i] && s1_cpy[i] == s2_cpy[i] && n > 1)
	{
		i++;
		n--;
	}
	return (s1_cpy[i] - s2_cpy[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "barry";
// 	char	s2[] = "baRry";
// 	printf ("%d \n", strncmp(s1, s2, 4));
// 	printf ("%d", ft_strncmp(s1, s2, 4));
// 	return (0);
// }