/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 01:38:26 by argirin           #+#    #+#             */
/*   Updated: 2016/11/09 01:38:29 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buffer, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char*)buffer == (unsigned char)c)
			return ((void*)buffer);
		buffer++;
	}
	return (NULL);
}
