/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:32:41 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/20 11:08:24 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_atoi(const char *str)
{
	int	i;
	int	value;
	int	sign;
	int	testSign;

	i = 0;
	sign = 1;
	value = 0;
	testSign = 0;
	if (!str)
		return (NULL);
	while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			value = value * 10 + (str[i] - 48);
		else if (str[i] == '+' || str[i] == '-')
		{
			testSign++;
			if (value != 0)
				break ;
			if (str[i] == '-')
				sign *= -1;
		}
		else
			break ;
		i++;
	}
	if (testSign > 1)
		return (0);
	return (sign * value);
}
#include <stdio.h>

int	main(void)
{
	printf ("%d \n", atoi("a42a"));
	printf ("%d", ft_atoi("a42a"));
	return (0);
}