/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavizet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:20:19 by gavizet           #+#    #+#             */
/*   Updated: 2016/11/16 13:52:00 by gavizet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_count_len(long int nbr)
{
	int				len;

	len = 0;
	if (!nbr)
		return (1);
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	unsigned int	nbr;
	int				signe;
	int				i;
	char			*s;

	if (!(s = (char*)malloc(sizeof(char) * (ft_count_len(n) + (n < 0) + 1))))
		return (NULL);
	signe = n;
	nbr = (signe < 0) ? -n : n;
	i = 0;
	if (!nbr)
		s[i++] = '0';
	while (nbr > 0)
	{
		s[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	if (signe < 0)
		s[i++] = '-';
	s[i] = 0;
	s = ft_strrev(s);
	return (s);
}
