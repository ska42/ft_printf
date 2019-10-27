/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_pointer_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:35:04 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/28 00:00:23 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		print_hexa_pointer(int size, unsigned long n, char str[9], int fl[7])
{
	int ret;
	int i;

	ret = 0;
	i = (!fl[6]) ? -1 : 0;
	if (fl && !fl[2] && (!fl[3] || fl[4]))
		while (++i <= (int)(fl[1] - (((fl[6] > size) ? fl[6] : size) + 2)))
			ret += ft_putchar_fd(' ', fl[5], NULL);
	ret += (int)write(fl[5], "0x", 2);
	if (!(i *= 0) && fl[6])
		while (++i <= (int)((fl[6] -
			(size + ((!fl[2] && !fl[4]) ? 2 : 0)))))
			ret += ft_putchar_fd('0', fl[5], NULL);
	if (fl[1] && fl[3] && !fl[4])
		while (++i <= (int)((fl[1] -
			(size + ((!fl[2] && !fl[4]) ? 2 : 0)))))
			ret += ft_putchar_fd('0', fl[5], NULL);
	if (!(i *= 0) && (fl[6] != -1 || n != 0) && !(size *= 0))
		while (str[size])
			ret += ft_putchar_fd(str[size++], fl[5], NULL);
	fl[6] = ret;
	if (fl && fl[2])
		while (++i <= (int)(fl[1] - fl[6]))
			ret += ft_putchar_fd(' ', fl[5], NULL);
	return (ret);
}

int		ft_puthexa_pointer_fd(unsigned long n, int fd, int fl[7])
{
	int				i;
	char			str[13];
	unsigned long	nnbr;
	int				size;

	size = 0;
	nnbr = n;
	while (n)
		n /= 16 + 0 * size++;
	n = nnbr;
	if (!size)
		str[size++] = '0';
	str[size] = '\0';
	i = size;
	while (i--)
	{
		if (nnbr % 16 < 10)
			str[i] = (nnbr % 16) + 48;
		else
			str[i] = (nnbr % 16) + (97 - 10);
		nnbr /= 16;
	}
	fl[5] = fd;
	size = (fl[6] < 0 && n == 0) ? 0 : size;
	return (print_hexa_pointer(size, n, str, fl));
}
