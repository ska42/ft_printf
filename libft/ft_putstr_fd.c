/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:20:43 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/25 19:38:03 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_putstr_fd(char *s, int fd, int precision[7])
{
	int i;
	int size;
	int ret;

	if (!s)
		s = "(null)\0";
	size = ft_strlen(s);
	ret = 0;
	if (precision)
	{
		i = 0;
		if (precision[6] < 0)
			size = 0;
		while (!precision[2] && i++ < precision[1] - ((precision[6] > 0 && precision[6] < size) ? (precision[6]) : size))
			if ((ret += (int)write(fd, " ", 1)) < 0)
				return (ret);
		i = 0;
		while (s && *s && ((precision[6]) ? (i++ < precision[6]) : 1))
			if ((ret += (int)write(fd, s++, 1)) < 0)
				return (ret);
		i = ret;
		while (precision[2] && i++ < precision[1])
			if ((ret += (int)write(fd, " ", 1)) < 0)
				return (ret);
	}
	else
	{
		while (*s)
			if ((ret += (int)write(fd, s++, 1)) < 0)
				return (ret);
	}
	return (ret);
}
