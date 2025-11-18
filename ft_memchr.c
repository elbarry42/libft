/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:24:43 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/18 12:48:41 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	unsigned char	*s_bis;

	i = 0;
	s_bis = (unsigned char *) s;
	while (s_bis[i])
	{
		if (s_bis[i] == c)
			return ((char *) &s_bis[i]);
		i++;
	}
	return (NULL);
}