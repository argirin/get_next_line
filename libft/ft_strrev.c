/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:24:04 by argirin           #+#    #+#             */
/*   Updated: 2016/11/08 21:24:23 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	save;

	i = 0;
	size = 0;
	while (str[size] != '\0')
		size++;
	size = size - 1;
	while (i < size)
	{
		save = str[size];
		str[size] = str[i];
		str[i] = save;
		i++;
		size--;
	}
	return (str);
}
