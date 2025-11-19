/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:28:33 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/19 18:48:27 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	i;
	unsigned char	temp;
	
	i = 0;
	temp = malloc (nmemb * size);
	if (!temp)
	return (NULL);
	
	while (condition)
	{
		/* code */
	}
	return (temp);
}
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_calloc())
}