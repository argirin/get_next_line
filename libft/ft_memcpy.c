/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 01:38:59 by argirin           #+#    #+#             */
/*   Updated: 2016/11/19 14:33:31 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destcpy;

	destcpy = (unsigned char*)dest;
	while (n--)
		*(unsigned char*)destcpy++ = *(unsigned char*)src++;
	return (dest);
}
