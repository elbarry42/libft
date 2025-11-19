/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:11:15 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/19 17:43:57 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strrchr(NULL, 'o'));
}