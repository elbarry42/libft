/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 11:49:23 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/23 13:29:03 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// #include <stdio.h>

// int main(void)
// {
//     t_list  *node1;
//     t_list  *node2;
//     t_list  *node3;

//     node1 = ft_lstnew("Hello");
//     node2 = ft_lstnew("42");
//     node3 = ft_lstnew("Lyon");

//     printf("Node 1 content: %s\n", (char *)node1->content);
//     printf("Node 2 content: %s\n", (char *)node2->content);
//     printf("Node 3 content: %s\n", (char *)node3->content);

//     printf("Node 1 next: %p\n", node1->next);
//     printf("Node 2 next: %p\n", node2->next);
//     printf("Node 3 next: %p\n", node3->next);

//     free(node1);
//     free(node2);
//     free(node3);

//     return (0);
// }
