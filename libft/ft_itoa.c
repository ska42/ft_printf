/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:21:36 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/13 06:29:30 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	nnbr;
	long	power;
	int		size;
	int		sign;

	sign = (n < 0) ? -1 : 1;
	nnbr = n;
	power = 10;
	size = (n < 0) ? 2 : 1;
	while (n /= 10)
		power = power * 10 + (0 * size++);
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (0);
	nnbr *= sign;
	size = (sign < 0) ? 1 : 0;
	while (power /= 10)
		str[size++] = ((nnbr / power) % 10) + 48;
	if (sign == -1)
		str[0] = '-';
	str[size] = '\0';
	return (str);
}
