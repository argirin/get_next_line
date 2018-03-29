/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:58:21 by argirin           #+#    #+#             */
/*   Updated: 2016/11/21 21:37:07 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcharsub(char const *s, unsigned int start, size_t len, char c)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(new = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (str[i] != c && i < len)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
