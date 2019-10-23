/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:23:52 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/23 10:27:05 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putint_fd(int n, int fd)
{
	int ret;
	char c;
	long nnbr;

	ret = 0;
	nnbr = n;
	if (nnbr < 0)
	{
		if ((ret = write(fd, "-", 1)) <= 0)
			return (ret);
		nnbr *= -1;
	}
	if (nnbr != 0)
	{
		if (nnbr / 10 > 0)
			if ((ret += ft_putint_fd(nnbr / 10, fd)) <= 0)
				return (ret);
		c = nnbr % 10 + 48;
		if ((ret += write(fd, &c, 1)) <= 0)
			return (ret);
	}
	if (n == 0)
		if ((ret += write(fd, "0", 1)) <= 0)
			return (ret);
	return (ret);
}
