/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:49:24 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/19 13:15:41 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
			return (0);
	return (1);
}

#include <stdio.h>

int	main (void)
{
	printf("%d \n", isalpha('a'));
	printf("%d", ft_isalpha('a'));
	return (0);
}