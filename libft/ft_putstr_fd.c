/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:20:43 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/25 03:46:24 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_fd(char *s, int fd, int precision[7])
{
	int ret;

	(void)precision;
	ret = 0;
	if (precision[6] != -1)
	{
		while (*s)
			if ((ret += (int)write(fd, s++, 1)) <= 0)
				return (ret);
	}
	return (ret);
}
