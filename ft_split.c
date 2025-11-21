/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:19:15 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/21 16:21:59 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_separator(char c, char charset)
{
	if(charset == c)
		return (1);
	return (0);
}

int	is_word(char cbefore, char c, char charset)
{
	return(!is_separator(c, charset) && is_separator(cbefore, charset));
}

int		get_words_count(const char *str, char charset)
{
	int	words_count;
	int	i;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')
	{
		if (is_word(str[i], str[i - 1], charset) ||
			(!is_separator(str[i], charset) && i == 0))
			words_count++;
		i++;
	}
	return (words_count);
}

int		*get_words_size(const char *str, char charset)
{
	int	index;
	int	i;
	int	words_count;
	int	*words_size;

	i = 0;
	words_count = get_words_count(str, charset);
	words_size = malloc(words_count * sizeof(int));
	while (i <= words_count)
	{
		words_size[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (i < 5)
	{
		if (!is_separator(str[i], charset))
			words_size[index]++;
		else if (i > 0 && !is_separator(str[i - 1], charset))
			index++;
		i++;
	}
	return (words_size);
}

char	**ft_split(const char *str, char charset)
{
	char	**words;
	int		i;
	int		j;
	int		index;
	int		*words_size;

	words = malloc((get_words_count(str, charset) + 1) * sizeof(char*));
	words_size = get_words_size(str, charset);
	index = 0;
	j = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!is_separator(str[i], charset))
		{
			if (i == 0 || is_word(str[i], str[i - 1], charset))
				words[index] = malloc(words_size[index] * sizeof(char));
			words[index][j] = str[i];
			words[index][++j] = '\0';
		}
		else if (i > 0 && !is_separator(str[i - 1], charset) && ++index)
			j = 0;
	}
	words[get_words_count(str, charset)] = 0;
	return (words);
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