/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:48:57 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/21 18:58:14 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len_s;
	char			*result;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	result = malloc(sizeof(char) * (len_s + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	to_upper_odd(unsigned int i, char c)
// {
// 	if (i % 2 == 1)
// 	{
// 		if (c >= 'a' && c <= 'z')
// 			return (c - 32);
// 	}
// 	return (c);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "hello world";
// 	char	*result;
// 	result = ft_strmapi(str, to_upper_odd);
// 	printf("Original: %s\n", str);
// 	printf("Mapped  : %s\n", result);
// 	free(result);
// 	return (0);
// }