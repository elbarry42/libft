/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:16:17 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/10 15:37:14 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 48 || str[i] > 57))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main (void)
{
	printf("%d", ft_isalnum("elhadj42"));
	return (0);
}