/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_pointer_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:35:04 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/26 05:57:31 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_puthexa_pointer_fd(unsigned long n, int fd, int precision[7])
{
	int				i;
	int				ret;
	char			str[13];
	unsigned long	nnbr;
	int				size;

	(void)precision;
	ret = 0;
	size = 0;
	nnbr = n;
	while (n)
		n /= 16 + 0 * size++;
	if (!size)
		str[size++] = '0';
	str[size] = '\0';
	i = size;
	while(i--)
	{
		if (nnbr % 16 < 10)
			str[i] = (nnbr % 16) + 48;
		else
			str[i] = (nnbr % 16) + (97 - 10);
		nnbr /= 16;
	}
	if (precision[6] < 0)
		size = 0;
	i = 1;
	if (precision && !precision[2] && precision[3] <= 0 && precision[1])
	{
		while (i++ <= (int)(precision[1] - (((precision[6] < 0) ? 0 : precision[6]) + 2)))
			ret += ft_putchar_fd(' ', fd, NULL);
	}
	ret += ft_putchar_fd('0', fd, NULL);
	ret += ft_putchar_fd('x', fd, NULL);
	i = 1;
	if (precision && (precision[6] || precision[1]))
	{
		/**
		if (precision[3] <= 0)
		{
			while (i++ <= (int)(precision[6] - (size + ((!precision[2] && !precision[4]) ? 2 : 0))))
				ret += ft_putchar_fd('0', fd, NULL);
		}
		else
		{
			while (i++ <= (int)(((precision[1] < precision[6] && precision[1]) || !precision[6]) ? precision[1] : precision[6]) - (size + ((!precision[2] && !precision[4]) ? 2 : 0)))
				ret += ft_putchar_fd('0', fd, NULL);
		}**/
	}
	if (precision[6] != -1 || n != 0)
	{
		size = -1;
		while (str[++size])
			ret += ft_putchar_fd(str[size], fd, NULL);
	}
	if (precision)
		precision[6] = ret;
	i = 1;
	if (precision && precision[2])
		while (i++ <= (int)(precision[1] - precision[6]))
			ret += ft_putchar_fd(' ', fd, NULL);
	return (ret);
}
