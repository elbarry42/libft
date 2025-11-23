/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 11:51:55 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/23 21:48:42 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	
	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

void	del_content(void *content)
{
	(void)content;
	// Si ton content avait été malloc (ex: ft_strdup),
	// tu ferais ici: free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*list;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = ft_lstnew("Hello");
	n2 = ft_lstnew("42");
	n3 = ft_lstnew("Lyon");

	n1->next = n2;
	n2->next = n3;
	list = n1;

	printf("Avant clear : ");
	print_list(list);

	ft_lstclear(&list, del_content);

	printf("Après clear : ");
	if (list == NULL)
		printf("list = NULL (OK)\n");
	else
		print_list(list);

	return (0);
}*/