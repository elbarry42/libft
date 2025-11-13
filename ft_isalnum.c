/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:16:17 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/13 12:52:26 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < 48 || c > 57))
			return (0);
	return (1);
}

#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	printf("%d \n", ft_isalnum('a'));
	printf("%d", ft_isalnum('a'));
	return (0);
}