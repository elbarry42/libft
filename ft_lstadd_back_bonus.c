/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 11:51:35 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/23 19:13:30 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*#include <stdio.h>

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s ", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*list = NULL;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = ft_lstnew("Hello");
	n2 = ft_lstnew("42");
	n3 = ft_lstnew("Lyon");

	// Ajouter au début dans une liste vide
	ft_lstadd_back(&list, n1);
	printf("After adding n1: ");
	print_list(list);

	// Ajouter au fond
	ft_lstadd_back(&list, n2);
	printf("After adding n2: ");
	print_list(list);

	// Ajouter encore au fond
	ft_lstadd_back(&list, n3);
	printf("After adding n3: ");
	print_list(list);

	// Free (pas besoin de free content, juste les nodes)
	free(n1);
	free(n2);
	free(n3);

	return (0);
}*/
