/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:23:52 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/26 22:31:59 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		print_unsignedint(int size, unsigned int n, char str[9], int flags[7])
{
	int i;
	int ret;

	ret = 0;
	i = 1;
	while (!flags[2] && (!flags[3] || flags[4]) && i++ <= (int)(flags[1] -
			(((flags[6] > size) ? flags[6] : size))))
		ret += ft_putchar_fd(' ', flags[5], NULL);
	if (!(i *= 0) && flags[1] && flags[3] && !flags[4] && !flags[2])
		while (++i <= (int)((flags[1] - (size))))
			ret += ft_putchar_fd('0', flags[5], NULL);
	else if (flags[6])
		while (++i <= (int)((flags[6] - (size))))
			ret += ft_putchar_fd('0', flags[5], NULL);
	if (!(i *= 0) && (flags[6] != -1 || n != 0) && !(size *= 0))
		while (str[size])
			ret += ft_putchar_fd(str[size++], flags[5], NULL);
	flags[6] = ret;
	if (flags[2])
		while (++i <= (int)(flags[1] - flags[6]))
			ret += ft_putchar_fd(' ', flags[5], NULL);
	return (ret);
}

int		ft_putuint_fd(unsigned int n, int fd, int flags[7])
{
	int				i;
	char			str[12];
	unsigned int	nnbr;
	int				size;

	size = 0;
	nnbr = n;
	while (nnbr)
		nnbr /= 10 + 0 * size++;
	nnbr = n;
	if (!size)
		str[size++] = '0';
	str[size] = '\0';
	i = size;
	while (i--)
	{
		str[i] = (nnbr % 10) + 48;
		nnbr /= 10;
	}
	flags[5] = fd;
	if (flags[6] < 0 && n == 0)
		size = 0;
	return (print_unsignedint(size, n, str, flags));
}
