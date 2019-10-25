/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:31:09 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/25 05:30:22 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

#include <stdio.h> // A DELETE

/*
	precision : 0 -> between % and flags
	precision : 1 -> digit before (width)
	precision : 2 -> number -
	precision : 3 -> number 0
	precision : 4 -> number .
	precision : 5 -> number *
	precision : 6 -> digit after (precision)
*/

int	ft_printf(const char *format, ...)
{
	int b;
	int b2;
	int b3;
	int before;
	int after;
	int	n;
	int n_printed;
	int ret;
	int precision[7];
	va_list ap;
	//char *buffer;

	b = 0;
	b2 = 0;
	b3 = 0;
	va_start(ap, format);
	n = -1;
	n_printed = 0;
	while (format[++n])
	{
		before = 0;
		after = 0;
		precision[0] = 0;
		precision[1] = 0;
		precision[2] = 0;
		precision[3] = 0;
		precision[4] = 0;
		precision[5] = 0;
		precision[6] = 0;
		ret = 0;
		if (format[n] == '%')
		{
			precision[0] = 1;
			while (format[n + precision[0]] == '-' || format[n + precision[0]] == '0'
				|| format[n + precision[0]] == '.' || format[n + precision[0]] == '*')
				{
					if (format[n + precision[0]] == '-')
						precision[2]++;
					if (format[n + precision[0]] == '0')
						precision[3]++;
					if (format[n + precision[0]] == '.')
					{
						b3 = 1;
						precision[4]++;
					}
					if (format[n + precision[0]] == '*')
					{
						if (!b3)
							before++;
						else
							after++;
						precision[5]++;
					}
					precision[0]++;
				}
			if (ft_isdigit(format[n + precision[0]]))
				precision[6] = ft_atoi(&format[n + precision[0]]);
			while (ft_isdigit(format[n + precision[0]]))
				precision[0]++;
			while (format[n + precision[0]] == '-' || format[n + precision[0]] == '0'
				|| format[n + precision[0]] == '.' || format[n + precision[0]] == '*')
			{
				if (format[n + precision[0]] == '-')
					precision[2]++;
				if (format[n + precision[0]] == '0')
					precision[3]++;
				if (format[n + precision[0]] == '.')
				{
					b = 1;
					precision[4]++;
				}
				if (format[n + precision[0]] == '*')
				{
					if ((b || b3) && !precision[6])
						after++;
					else
						before++;
					precision[5]++;
				}
				precision[0]++;
			}
			if (precision[6] && precision[4])
			{
				precision[1] = precision[6];
				precision[6] = 0;
			}
			if (ft_isdigit(format[n + precision[0]]))
				precision[6] = ft_atoi(&format[n + precision[0]]);
			while (ft_isdigit(format[n + precision[0]]))
				precision[0]++;
			precision[0]--;
			//
			while (before--)
				precision[1] = va_arg(ap, int);
			while (after--)
			{
				if (!precision[1] || !precision[6])
					precision[1] = va_arg(ap, int);
				else
					precision[6] = va_arg(ap, int);
			}

			/**
			while (!precision[4] && precision[5]--)
				precision[6] = va_arg(ap, int);
			if (b && b2)
				while (precision[4] && precision[5]--)
					precision[6] = va_arg(ap, int);
			else
			{
				while (precision[4] && precision[5]--)
					precision[1] = va_arg(ap, int);
			}**/
			if (precision[1] < 0)
			{
				precision[6] = 0;
				precision[2]++;
			}
			precision[6] = (precision[6] < 0) ? -precision[6] : precision[6];
			precision[1] = (precision[1] < 0) ? -precision[1] : precision[1];
			if ((!precision[6] && b) || (b3 && !precision[6] && !precision[1]))
				precision[6] = -1;
			//
			if (format[n + precision[0] + 1] == 'c' || format[n + precision[0] + 1] == 's' ||
				format[n + precision[0] + 1] == 'p' || format[n + precision[0] + 1] == 'd' ||
				format[n + precision[0] + 1] == 'i' || format[n + precision[0] + 1] == 'u' ||
				format[n + precision[0] + 1] == 'x' || format[n + precision[0] + 1] == 'X' ||
				format[n + precision[0] + 1] == '%')
			{
					if (format[n + precision[0] + 1] == '%')
						if ((ret = ft_putchar_fd('%', 1, precision)) < 0)
							return (ret);
					if (format[n + precision[0] + 1] == 'c')
						if ((ret = ft_putchar_fd((char)va_arg(ap, int), 1, precision)) < 0)
							return (ret);
					if (format[n + precision[0] + 1] == 's')
						if ((ret = ft_putstr_fd((char *)va_arg(ap, char *), 1, precision)) < 0)
							return (ret);
					if (format[n + precision[0] + 1] == 'p')
						if ((ret = ft_puthexa_pointer_fd((unsigned long)va_arg(ap, void *), 1, precision)) < 0)
							return (ret);
					if (format[n + precision[0] + 1] == 'i' || format[n + precision[0] + 1] == 'd')
						if ((ret = ft_putint_fd((int)va_arg(ap, int), 1, precision)) < 0)
							return (ret);
					if (format[n + precision[0] + 1] == 'u')
						if ((ret = ft_putunsignedint_fd((unsigned int)va_arg(ap, unsigned int), 1, precision)) < 0)
							return (ret);
					if (format[n + precision[0] + 1] == 'x')
						if ((ret = ft_puthexa_fd((unsigned int)va_arg(ap, int), 1, precision)) < 0)
							return (ret);
					if (format[n + precision[0] + 1] == 'X')
						if ((ret = ft_puthexa_capitalize_fd((unsigned int)va_arg(ap, int), 1, precision)) < 0)
							return (ret);
					n_printed += ret;
					n = n + precision[0] + 1;
			}
			else
			{
				ret = ft_putchar_fd(format[n + precision[0] + 1], 1, precision);
				n_printed += ret;
				n = n + precision[0] + 1;
			}
		}
		else
		{
			ret = ft_putchar_fd(format[n], 1, NULL);
			n_printed += ret;
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
