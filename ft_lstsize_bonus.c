/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 11:50:02 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/23 13:50:33 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

// #include <stdio.h>

// int main(void)
// {
//     t_list  *list = NULL;
//     t_list  *n1;
//     t_list  *n2;
//     t_list  *n3;

//     n1 = ft_lstnew("Hello");
//     n2 = ft_lstnew("42");
//     n3 = ft_lstnew("Lylon");

//     ft_lstadd_front(&list, n1); // list = [n1]
//     ft_lstadd_front(&list, n2); // list = [n2] -> [n1]
//     ft_lstadd_front(&list, n3); // list = [n3] -> [n2] -> [n1]

//     printf("List size = %d\n", ft_lstsize(list));

//     // free nodes (content is not malloc)
//     free(n1);
//     free(n2);
//     free(n3);

//     return (0);
// }
