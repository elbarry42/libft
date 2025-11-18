/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:52:44 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/18 12:54:46 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static void print_buffer(const void *buf, size_t size)
{
	size_t i = 0;
	const unsigned char *p = buf;

	while (i < size)
	{
		printf("%02X ", p[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	char buffer1[20];
	//char buffer2[20];
	//char buffer3[20];

	printf("=== ft_memset ===\n");
	ft_memset(buffer1, 'A', 10);
	print_buffer(buffer1, 10);

	/*printf("\n=== ft_bzero ===\n");
	ft_bzero(buffer1, 10);
	print_buffer(buffer1, 10);

	printf("\n=== ft_memcpy ===\n");
	ft_memset(buffer1, 'X', 10);
	ft_memcpy(buffer2, buffer1, 10);
	print_buffer(buffer2, 10);

	printf("\n=== ft_memmove (overlap) ===\n");
	char overlap[] = "ABCDEFGHIJ";
	ft_memmove(overlap + 2, overlap, 5);
	printf("Result: %s\n", overlap);

	printf("\n=== ft_memchr ===\n");
	char str[] = "Hello_42_Lyon";
	char *found = ft_memchr(str, '_', ft_strlen(str));
	if (found)
		printf("Found '_': %s\n", found);
	else
		printf("Not found.\n");

	printf("\n=== ft_memcmp ===\n");
	int cmp = ft_memcmp("ABC", "ABD", 3);
	printf("memcmp result: %d\n", cmp);

	printf("\n=== ft_calloc ===\n");
	int *arr = ft_calloc(5, sizeof(int));
	if (!arr)
		return (1);
	print_buffer(arr, 5 * sizeof(int));
	free(arr);

	printf("\n=== END MEMORY TESTS ===\n");
	return (0);*/
}
