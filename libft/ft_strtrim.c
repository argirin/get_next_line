/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:43:06 by argirin           #+#    #+#             */
/*   Updated: 2016/11/16 17:15:46 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	int		i;
	int		len;
	int		start;

	i = 0;
	if (!str)
		return (NULL);
	if (!*str)
		return ((char*)str);
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		i++;
	if (str[i] == '\0')
		return (ft_strnew(0));
	start = i;
	i = ft_strlen((char*)str) - 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i--;
	len = i - start + 1;
	return (ft_strsub(str, start, len));
}
