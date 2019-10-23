/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 08:55:01 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/23 09:50:55 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_puthexa_fd(long n, int fd)
{
	int			ret;
	char		str[9];
	long long	nnbr;
	int			size;

	ret = 0;
	size = 0;
	nnbr = n;
	while (n)
		n /= 16 + 0 * size++;
	str[size] = '\0';
	while(size--)
	{
		if (nnbr % 16 < 10)
			str[size] = (nnbr % 16) + 48;
		else
			str[size] = (nnbr % 16) + (97 - 10);
		nnbr /= 16;
	}
	size = -1;
	while (str[++size])
		ret += ft_putchar_fd(str[size], fd);
	return (ret);
}
