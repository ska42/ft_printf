/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_capitalize_fd.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:09:36 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/23 10:19:35 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_puthexa_capitalize_fd(unsigned int n, int fd)
{
	int				ret;
	char			str[9];
	unsigned int	nnbr;
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
			str[size] = (nnbr % 16) + (65 - 10);
		nnbr /= 16;
	}
	size = -1;
	while (str[++size])
		ret += ft_putchar_fd(str[size], fd);
	return (ret);
}
