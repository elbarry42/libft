/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:45:56 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/18 16:30:05 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*s_bis;

	i = 0;
	s_bis = (unsigned char *) s;
	while (i < n && s_bis[i])
	{
		s_bis[i] = c;
		i++;
	}
	return ((void *)s_bis);
	
}

#include <stdio.h>

int	main(void)
{
	char buffer1[20];
	//char buffer2[20];
	//char buffer3[20];

	printf("=== ft_memset ===\n");
	ft_memset(buffer1, 'A', 10);
	printf("%s", buffer1);
	return (0);
}