/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 08:55:01 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/26 05:57:41 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_puthexa_fd(unsigned int n, int fd, int precision[7])
{
	int				i;
	int				ret;
	char			str[9];
	unsigned int	nnbr;
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
	n = nnbr;
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
		while (i++ <= (int)(precision[1] - ((precision[6] > size) ? precision[6] : size)))
			ret += ft_putchar_fd(' ', fd, NULL);
	i = 1;
	if (precision && (precision[6] || precision[1]))
	{
		/**
		if (precision[3] <= 0)
		{
			while (i++ <= (int)(precision[6] - (size)))
				ret += ft_putchar_fd('0', fd, NULL);
		}
		else
		{
			while (i++ <= (int)(((precision[1] < precision[6] && precision[1]) || !precision[6]) ? precision[1] : precision[6]) - (size))
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
