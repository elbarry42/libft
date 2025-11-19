/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:46:18 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/19 13:19:53 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}

#include <stdio.h>

int	main(void)
{
	unsigned char s[20] = "AAAAAAAA";
	ft_bzero(s, 20);
	printf("%s", (char *) s);
	return (0);
}