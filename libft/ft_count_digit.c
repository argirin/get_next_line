/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 02:06:35 by argirin           #+#    #+#             */
/*   Updated: 2016/11/16 18:44:26 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_digit(long	int nbr)
{
	int	len;
	int	div;

	div = 1;
	len = 1;
	while ((nbr / div) >= 10)
	{
		div *= 10;
		len++;
	}
	return (len);
}
