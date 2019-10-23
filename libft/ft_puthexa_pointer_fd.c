/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_pointer_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:35:04 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/23 10:40:41 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_puthexa_pointer_fd(unsigned long n, int fd)
{
	int				ret;
	char			str[13];
	unsigned long	nnbr;
	int				size;

	ret = 0;
	size = 0;
	nnbr = n;
	while (n)
		n /= 16 + 0 * size++;
	if (!size)
		str[size++] = '0';
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
	ret += ft_putchar_fd('0', fd);
	ret += ft_putchar_fd('x', fd);
	while (str[++size])
		ret += ft_putchar_fd(str[size], fd);
	return (ret);
}
