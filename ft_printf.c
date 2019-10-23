/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:31:09 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/23 21:05:18 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

#include <stdio.h> // A DELETE

int	ft_printf(const char *format, ...)
{
	int	n;
	int n_printed;
	int ret;
	int precision;
	va_list ap;
	//char *buffer;

	va_start(ap, format);
	n = -1;
	n_printed = 0;
	while (format[++n])
	{
		ret = 0;
		if (format[n] == '%')
		{
			precision = 1;
			if (format[n + precision] == '-')
			{
				precision++;
				while (ft_isdigit(format[n + precision]))
					precision++;
			}
			while (format[n + precision] == '-' || format[n + precision] == '0'
				|| format[n + precision] == '.' || format[n + precision] == '*')
				precision++;
			precision--;
			if (format[n + 1] == 'c' || format[n + 1] == 's' ||
				format[n + 1] == 'p' || format[n + 1] == 'd' ||
				format[n + 1] == 'i' || format[n + 1] == 'u' ||
				format[n + 1] == 'x' || format[n + 1] == 'X')
			{
					n = n + 1;
					if (format[n] == 'c')
						if ((ret = ft_putchar_fd((char)va_arg(ap, int), 1)) <= 0)
							return (ret);
					if (format[n] == 's')
						if ((ret = ft_putstr_fd((char *)va_arg(ap, char *), 1)) <= 0)
							return (ret);
					if (format[n] == 'p')
						if ((ret = ft_puthexa_pointer_fd((unsigned long)va_arg(ap, void *), 1)) <= 0)
							return (ret);
					if (format[n] == 'i' || format[n] == 'd')
						if ((ret = ft_putint_fd((int)va_arg(ap, int), 1)) <= 0)
							return (ret);
					if (format[n] == 'u')
						if ((ret = ft_putunsignedint_fd((unsigned int)va_arg(ap, unsigned int), 1)) <= 0)
							return (ret);
					if (format[n] == 'x')
						if ((ret = ft_puthexa_fd((unsigned int)va_arg(ap, int), 1)) <= 0)
							return (ret);
					if (format[n] == 'X')
						if ((ret = ft_puthexa_capitalize_fd((unsigned int)va_arg(ap, int), 1)) <= 0)
							return (ret);
					n_printed += ret;
			}
		}
		else
		{
			n_printed++;
			ft_putchar_fd(format[n], 1);
		}
	}
	va_end(ap);
	return (n_printed);
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
