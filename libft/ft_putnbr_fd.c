/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:49:22 by argirin           #+#    #+#             */
/*   Updated: 2016/11/08 22:49:02 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		div;
	char	stock;

	nb = n;
	div = 1;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	while ((nb / div >= 10))
	{
		div = div * 10;
	}
	while (div > 0)
	{
		stock = (((nb / div) % 10) + '0');
		write(fd, &stock, 1);
		div = div / 10;
	}
}
