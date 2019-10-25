/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:23:52 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/25 03:26:48 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putunsignedint_fd(unsigned int n, int fd, int precision[7])
{
	int				i;
	int				ret;
	char			str[12];
	unsigned int	nnbr;
	int				size;

	ret = 0;
	size = 0;
	nnbr = n;
	while (n)
		n /= 10 + 0 * size++;
	if (!size)
		str[size++] = '0';
	str[size] = '\0';
	i = size;
	while(i--)
	{
		str[i] = (nnbr % 10) + 48;
		nnbr /= 10;
	}
	i = 1;
	if (precision && precision[3] && !precision[2] && precision[4] && precision[6] != -1)
		while (i++ <= (int)(precision[1] - (precision[6])))
			ret += ft_putchar_fd(' ', fd, NULL);
	if (precision[6] != -1 || n != 0)
	{
		i = 1;
		if (precision && precision[6])
		while (i++ <= (int)(precision[6] - size))
			ret += ft_putchar_fd('0', fd, NULL);
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
