/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:45:56 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/17 16:22:35 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *s, int c, size_t n)
{
	int	i;
	unsigned char	*s_bis;

	i = 0;
	s_bis = (unsigned char *) s;
	while (i < n && s_bis[i])
	{
		s_bis[i] = (unsigned char *) c;
		i++;
	}
	return (0);
	
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	return (0);
}