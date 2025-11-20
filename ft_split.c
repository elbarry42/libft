/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:19:15 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/20 18:29:49 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_separator(char c, char *charset)
{
	int	i;
	
	i = 0;
	while (charset[i])
	{
		if(charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	is_word(char cbefore, char c, char *charset)
{
	return(!is_separator(c, charset) && is_separator(cbefore, charset));
}

char	**ft_split(char const *s, char c)
{
	
}
#include <stdio.h>
int	main(void)
{
	int	i = 0;
	char	**split = ft_split("bonjour tout le monde", ' ');
	while (split[i])
	{
		printf("%s", split[i]);
		i++;
	}
	return (0);
}