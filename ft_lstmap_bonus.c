/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 11:52:32 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/23 22:19:01 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	
	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*#include <stdio.h>

void	*duplicate_content(void *content)
{
	// On renvoie une nouvelle string allouée
	return (ft_strdup((char *)content));
}

void	del_content(void *content)
{
	// Ici on libère ce que f a alloué
	free(content);
}

void	print_list(t_list *lst, char *msg)
{
	printf("%s\n", msg);
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n\n");
}

int	main(void)
{
	t_list	*list;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*new_list;

	// Création liste originale
	n1 = ft_lstnew("Hello");
	n2 = ft_lstnew("42");
	n3 = ft_lstnew("Lyon");
	n1->next = n2;
	n2->next = n3;
	list = n1;

	print_list(list, "Liste originale :");

	// Appliquer ft_lstmap
	new_list = ft_lstmap(list, duplicate_content, del_content);
	if (!new_list)
	{
		printf("Erreur dans ft_lstmap\n");
		return (1);
	}

	print_list(new_list, "Nouvelle liste (dupliquée et allouée) :");

	// Tester que la liste originale n'est PAS modifiée
	print_list(list, "Liste originale après map (inchangée) :");

	// Nettoyer les deux listes
	ft_lstclear(&new_list, del_content); // new_list contient du malloc
	free(n1); // original : content non malloc
	free(n2);
	free(n3);

	return (0);
}*/
