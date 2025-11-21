/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:32:41 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/21 17:21:07 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	value;
	int	sign;

	i = 0;
	value = 0;
	sign = 1;
	while (str[i] >= 7 && str[i] <= 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] && ft_isdigit(str[i])))
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (sign * value);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf ("%d \n", atoi("--42a"));
// 	printf ("%d", ft_atoi("--42a"));
// 	return (0);
// }