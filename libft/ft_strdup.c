/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:21:38 by argirin           #+#    #+#             */
/*   Updated: 2016/11/25 13:00:25 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*dest;

	if (!(dest = (char*)malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
