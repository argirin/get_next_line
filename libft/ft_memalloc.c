/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 01:37:00 by argirin           #+#    #+#             */
/*   Updated: 2016/11/22 17:48:22 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	if (!(tab = (unsigned char*)malloc(sizeof(unsigned char) * size)))
		return (NULL);
	while (i < size)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
