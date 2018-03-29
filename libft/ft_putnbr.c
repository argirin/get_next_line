/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:29:17 by argirin           #+#    #+#             */
/*   Updated: 2016/11/08 17:47:23 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	nb;
	int		div;

	nb = n;
	div = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	while ((nb / div >= 10))
	{
		div = div * 10;
	}
	while (div > 0)
	{
		ft_putchar(((nb / div) % 10) + '0');
		div = div / 10;
	}
}
