/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:53:49 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/20 13:19:04 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	tmp;
	
	tmp = n;
	if (n < 0)
	{
		tmp = -1 * n;
		ft_putchar_fd('-', fd);
	}
	if (tmp < 10)
		ft_putchar_fd((tmp + 48), fd);
	else
	{
		ft_putnbr_fd((tmp / 10), fd);
		ft_putchar_fd(((tmp % 10) + 48), fd);
	}
}

int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}