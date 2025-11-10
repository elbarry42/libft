/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:03:03 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/10 15:33:57 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 48 || str[i] > 57))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
#include <ctype.h>
int	main (void)
{
	printf("%d", ft_isdigit("8"));
	printf("%d", isdigit("8"));
	return (0);
}