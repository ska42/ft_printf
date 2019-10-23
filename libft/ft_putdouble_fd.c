/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:49:23 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/23 11:08:27 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		after_coma(unsigned long nb, int fd)
{

}

int		before_coma(unsigned long nb, int fd)
{

}

int		ft_putdouble_fd(double n, int fd)
{
	int								ret;
	unsigned long double			value;
	unsigned long					before_coma;
	unsigned long					after_coma;

	if (n < 0)
		ft_putchar_fd('-', fd);
	value = n;
	before_coma = value;

}
