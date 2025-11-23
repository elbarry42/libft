/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 11:52:15 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/23 21:56:20 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void	print_node(void *content)
{
	printf("Node content: %s\n", (char *)content);
}

int main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list *list;

	n1 = ft_lstnew("Hello");
	n2 = ft_lstnew("42");
	n3 = ft_lstnew("Lyon");

	n1->next = n2;
	n2->next = n3;
	list = n1;

	printf("Applying f to each node:\n");
	ft_lstiter(list, print_node);

	// free nodes (contents are not malloc’d)
	free(n1);
	free(n2);
	free(n3);

	return 0;
}
*/