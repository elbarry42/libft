/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 11:51:32 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/24 12:31:00 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*#include <stdio.h>

void	del_content(void *content)
{
	printf("del() called for content: %s\n", (char *)content);
	// ici, le content n'est pas malloc donc on ne free pas
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

int main(void)
{
	t_list *n1 = ft_lstnew("Hello");
	t_list *n2 = ft_lstnew("42");
	t_list *n3 = ft_lstnew("Lyon");

	// chainage
	n1->next = n2;
	n2->next = n3;

	printf("Before delete: ");
	print_list(n1);

	printf("\nDeleting node 2:\n");
	ft_lstdelone(n2, del_content);

	printf("\nAfter delete (attention, 
	la chaine est cassée car on ne recolle pas !):\n");
	print_list(n1);

	// free rest nodes
	free(n1);
	free(n3);

	return 0;
}*/
