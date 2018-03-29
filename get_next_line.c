/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 12:57:15 by argirin           #+#    #+#             */
/*   Updated: 2016/11/25 18:24:48 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_pansement(char *stock, char **line, char *buffer)
{
	if ((buffer = ft_strchr(stock, '\0')) != NULL)
	{
		*buffer = '\0';
		*line = ft_strdup(stock);
		*stock = '\0';
		return (1);
	}
	return (0);
}

char		*get_buff(const int fd, char *stock, int *ret_val)
{
	char	*temp;
	char	buffer[BUFF_SIZE + 1];

	*ret_val = read(fd, buffer, BUFF_SIZE);
	buffer[*ret_val] = '\0';
	temp = stock;
	stock = ft_strjoin(stock, buffer);
	ft_strdel(&temp);
	return (stock);
}

int			get_next_line(const int fd, char **line)
{
	char		*buffer;
	int			ret_val;
	static char	*stock;

	if (fd < 0 || !line || BUFF_SIZE <= 0)
		return (-1);
	ret_val = 1;
	stock = (stock) ? stock : ft_strnew(0);
	while (ret_val > 0)
	{
		stock = get_buff(fd, stock, &ret_val);
		if (ret_val == -1)
		{
			ft_strclr(stock);
			return (-1);
		}
		if ((buffer = ft_strchr(stock, '\n')) != NULL)
		{
			*buffer = '\0';
			*line = ft_strdup(stock);
			ft_memmove(stock, buffer + 1, ft_strlen(buffer + 1) + 1);
			return (1);
		}
	}
	return ((*stock == '\0') ? 0 : ft_pansement(stock, line, buffer));
}
