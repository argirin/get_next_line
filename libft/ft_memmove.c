/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 01:40:06 by argirin           #+#    #+#             */
/*   Updated: 2016/11/25 12:58:55 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char*)dest;
	src2 = (unsigned char*)src;
	if (src2 < dest2)
	{
		dest2 += n;
		src2 += n;
		while (n--)
			*--dest2 = *--src2;
	}
	else
	{
		while (n--)
			*dest2++ = *src2++;
	}
	return (dest);
}
