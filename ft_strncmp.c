/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:50:00 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/10 16:59:16 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i])
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "barry";
	char	s2[] = "baRry";
	printf ("%d \n", strncmp(s1, s2, 4));
	printf ("%d", ft_strncmp(s1, s2, 4));
	return (0);
}