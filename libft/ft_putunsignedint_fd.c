/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:23:52 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/23 08:11:44 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putunsignedint_fd(unsigned int n, int fd)
{
	int			ret;
	char		c;
	long long	nnbr;

	nnbr = n;
	if (nnbr != 0)
	{
		if (nnbr / 10 > 0)
			if ((ret = ft_putint_fd(nnbr / 10, fd)) <= 0)
				return (ret);
		c = nnbr % 10 + 48;
		if ((ret = write(fd, &c, 1)) <= 0)
			return (ret);
	}
	if (n == 0)
		if ((ret = write(fd, "0", 1)) <= 0)
			return (ret);
	return (1);
}
