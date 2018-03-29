/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:18:11 by argirin           #+#    #+#             */
/*   Updated: 2016/11/16 17:18:19 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int n)
{
	char	*save;

	save = 0;
	if ((unsigned char)n == '\0')
	{
		while (*str)
			str++;
		save = (char*)(str++);
		return (save);
	}
	while (*str)
	{
		if (*str == (char)n)
			save = (char*)str;
		str++;
	}
	return ((save != 0) ? save : NULL);
}
