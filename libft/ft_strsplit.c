/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:04:37 by argirin           #+#    #+#             */
/*   Updated: 2016/11/09 11:31:42 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_len(char const *s, char c)
{
	int			i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static	int		count_nb_tab(char const *s, char c)
{
	int			i;
	int			word;

	i = 0;
	word = 0;
	if (s[0] != c)
		word = 1;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			if (s[i + 1] != '\0' && s[i + 1] != c)
				word++;
			i++;
		}
		i++;
	}
	return (word);
}

static	char	*transfert_mot(char *word, char const *s, int i, char c)
{
	int			debut_mot;

	debut_mot = 0;
	if (!s[i])
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
			word[debut_mot] = s[i];
		else
		{
			word[debut_mot] = '\0';
			return (word);
		}
		debut_mot++;
		i++;
	}
	word[debut_mot] = '\0';
	return (word);
}

static	char	*the_word(int i, char const *s, char c)
{
	char		*word;
	int			count;
	int			k;

	k = 0;
	count = 0;
	if (!(word = (char*)malloc((ft_len(s, c) + 1) * sizeof(char))))
		return (NULL);
	while (s[k] && s[k] == c)
		k++;
	while (count < i)
	{
		while (s[k] != c && s[k])
			k++;
		while (s[k] == c && s[k])
			k++;
		count++;
	}
	return (transfert_mot(word, s, k, c));
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			nb_tab;
	int			i;

	if (!s)
		return (NULL);
	i = 0;
	nb_tab = count_nb_tab(s, c);
	if (!(tab = (char**)malloc((nb_tab + 1) * sizeof(char*))))
		return (NULL);
	while (i < nb_tab)
	{
		tab[i] = the_word(i, s, c);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
