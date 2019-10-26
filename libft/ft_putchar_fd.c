/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:18:41 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/26 18:53:09 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putchar_fd(char c, int fd, int precision[7])
{
	int ret;
	int i;

	ret = 0;
	i = 1;
	if (precision && (precision[6] || precision[1]) && !precision[2])
	{
		if (precision[1] && !precision[3])
			while (i++ < (int)precision[1])
				ret += (int)write(fd, " ", 1);
		if (precision[1] && (precision[3]))
			while (i++ < (int)precision[1])
				ret += (int)write(fd, "0", 1);
	}
	ret += (int)write(fd, &c, 1);
	if (precision && precision[1] && precision[2])
		while (i++ < (int)precision[1])
			ret += (int)write(fd, " ", 1);
	return (ret);
}
