/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:11:15 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/23 10:54:45 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] != (unsigned char) c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *) &s[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_strrchr("langage", 'a'));
// 	return (0);
// }