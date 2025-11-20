/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:28:33 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/20 10:57:13 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t total;
	unsigned char	*temp;
	
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	temp = malloc (total);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < total)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
#include <stdio.h>

int	main(void)
{
	unsigned char *test = ft_calloc(10, 4);
	int	i = 0;
	while (i < 10)
	{
		printf("%d", test[i]);
		i++;
	}
	return (0);
}
