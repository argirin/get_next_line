/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:23:30 by argirin           #+#    #+#             */
/*   Updated: 2016/11/16 14:41:09 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		nfind(char const *str, char const *to_find)
{
	int			i;

	i = 0;
	while (to_find[i] == str[i] && to_find[i] && str[i])
		i++;
	if (to_find[i] == '\0')
		return (1);
	return (0);
}

char			*ft_strnstr(char const *str, char const *to_find, size_t n)
{
	size_t			i;
	size_t			stock;

	i = 0;
	if (!(to_find[i] || n == 0))
		return ((char*)str);
	while (str[i] && i < n)
	{
		if ((str[i] == to_find[0]) && (nfind(&str[i], to_find)))
		{
			stock = i + ft_strlen(to_find);
			if (n >= stock)
				return ((char*)&str[i]);
		}
		i++;
	}
	return (NULL);
}
