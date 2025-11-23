/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 11:50:26 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/23 19:07:51 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*#include <stdio.h>

int main(void)
{
    t_list *list = NULL;
    t_list *n1;
    t_list *n2;
    t_list *n3;
    t_list *last;

    n1 = ft_lstnew("First");
    n2 = ft_lstnew("Second");
    n3 = ft_lstnew("Last");

    ft_lstadd_front(&list, n1); // list: n1
    ft_lstadd_front(&list, n2);  // list: n1 -> n2
    ft_lstadd_front(&list, n3);  // list: n1 -> n2 -> n3

    last = ft_lstlast(list);

    if (last)
        printf("Last node content : %s\n", (char *)last->content);
    else
        printf("List is empty.\n");

    // free (content isn’t malloc’d)
    free(n1);
    free(n2);
    free(n3);

    return (0);
}*/
