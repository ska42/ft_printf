/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:31:09 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/21 15:30:45 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

#include <stdio.h> // A DELETE

int	ft_printf(const char *format, ...)
{
	int	n;
	int n_args;
	int len;
	//char *a;
	//va_list ap;

	len = ft_strlen(format);
	n = -1;
	n_args = 0;
	while (format[++n])
	{
		if (n + 1 < len && format[n] == '%' && (format[n + 1] == 'c' || format[n + 1] == 's' || format[n + 1] == 'p' || format[n + 1] == 'd' || format[n + 1] == 'i' || format[n + 1] == 'u' || format[n + 1] == 'x' || format[n + 1] == 'X'))
		{
			 n = n + 1 + 0 * n_args++;
		}
	}
	printf("NOMBRE ARGS : %i\n", n_args);
	return (0);
}
/**
	va_start(ap, format);
	printf("format :%s\n", format);
	while (a)
	{
		a = va_arg(ap, char *);
		printf("ap: %s\n", a);
	}
	printf("format :%s\n", format);
	printf("ap: %s\n", a);
	va_end(ap);
	printf("nb args : %i\n", n);
	return (0);
}**/
