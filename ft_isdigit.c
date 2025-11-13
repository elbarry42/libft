/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:03:03 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/13 13:13:48 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
			return (0);
	return (1);
}

#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	printf("%d \n", isdigit('8'));
	printf("%d", ft_isdigit('8'));
	return (0);
}