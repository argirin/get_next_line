/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:30:49 by argirin           #+#    #+#             */
/*   Updated: 2016/11/25 13:05:09 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	if (!(new = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (size)
	{
		new[size] = '\0';
		size--;
	}
	new[size] = '\0';
	return (new);
}
