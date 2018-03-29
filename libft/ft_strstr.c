/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:25:15 by argirin           #+#    #+#             */
/*   Updated: 2016/11/16 14:57:12 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		find(char *str, char *to_find)
{
	int			i;

	i = 0;
	while ((to_find[i] == str[i]) && to_find[i] && str[i])
		i++;
	if (to_find[i] == '\0')
		return (1);
	return (0);
}

char			*ft_strstr(const char *str, const char *to_find)
{
	int			i;

	i = 0;
	if (!(to_find[i]))
		return ((char*)str);
	while (str[i])
	{
		if ((str[i] == to_find[0]) && (find((char*)&str[i], (char*)to_find)))
			return ((char*)&str[i]);
		i++;
	}
	return (NULL);
}
