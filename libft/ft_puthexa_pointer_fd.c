/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_pointer_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:35:04 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/27 19:36:39 by ska              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		print_hexa_pointer(int size, unsigned long n, char str[9], int flags[7])
{
	int ret;
	int i;

	ret = 0;
	i = 0;
	if (!flags[6])
		i = -1;
	if (flags && !flags[2] && (!flags[3] || flags[4]))
		while (++i <= (int)(flags[1] - (((flags[6] > size) ? flags[6] : size) + 2)))
			ret += ft_putchar_fd(' ', flags[5], NULL);
	ret += (int)write(flags[5], "0x", 2);
	if (!(i *= 0) && flags[6])
		while (++i <= (int)((flags[6] -
			(size + ((!flags[2] && !flags[4]) ? 2 : 0)))))
			ret += ft_putchar_fd('0', flags[5], NULL);
	if (flags[1] && flags[3] && !flags[4])
		while (++i <= (int)((flags[1] -
			(size + ((!flags[2] && !flags[4]) ? 2 : 0)))))
			ret += ft_putchar_fd('0', flags[5], NULL);
	if (!(i *= 0) && (flags[6] != -1 || n != 0) && !(size *= 0))
		while (str[size])
			ret += ft_putchar_fd(str[size++], flags[5], NULL);
	flags[6] = ret;
	if (flags && flags[2])
		while (++i <= (int)(flags[1] - flags[6]))
			ret += ft_putchar_fd(' ', flags[5], NULL);
	return (ret);
}

int		ft_puthexa_pointer_fd(unsigned long n, int fd, int flags[7])
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
	flags[5] = fd;
	size = (flags[6] < 0 && n == 0) ? 0 : size;
	return (print_hexa_pointer(size, n, str, flags));
}
