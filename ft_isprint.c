/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:38:01 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/10 15:41:20 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 || str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main (void)
{
	printf("%d", ft_isprint("test4/!"));
	return (0);
}