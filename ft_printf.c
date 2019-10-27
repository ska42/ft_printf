/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:31:09 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/28 00:16:55 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

int	printf_choice(const char *format, va_list ap, int n, int fl[8])
{
	if (format[n + fl[0] + 1] == 'c')
		return (ft_putchar_fd((char)va_arg(ap, int), 1, fl));
	else if (format[n + fl[0] + 1] == 's')
		return (ft_putstr_fd((char *)va_arg(ap, char *), 1, fl));
	else if (format[n + fl[0] + 1] == 'p')
	{
		if (!fl[2] && !fl[3] && !fl[4] && !fl[5] && fl[1])
			fl[1]--;
		return (ft_puthexa_pointer_fd((unsigned long)va_arg(ap, void *)
, 1, fl));
	}
	else if (format[n + fl[0] + 1] == 'i' || format[n + fl[0] + 1] == 'd')
		return (ft_putint_fd((int)va_arg(ap, int), 1, fl));
	else if (format[n + fl[0] + 1] == 'u')
		return (ft_putuint_fd((unsigned int)va_arg(ap, unsigned int), 1, fl));
	else if (format[n + fl[0] + 1] == 'x')
		return (ft_puthexa_fd((unsigned int)va_arg(ap, int), 1, fl));
	else if (format[n + fl[0] + 1] == 'X')
		return (ft_puthexa_cap_fd((unsigned int)va_arg(ap, int), 1, fl));
	else
		return (ft_putchar_fd(format[n + fl[0] + 1], 1, fl));
	return (0);
}

int	while_part3(const char *format, int *n, int fl[8])
{
	if (format[*n + fl[0]] == '-' && ++fl[2])
		fl[3] = 0;
	if (format[*n + fl[0]] == '0' && ++fl[3] && format[*n + fl[0] - 1] == '.')
		fl[6] = 0 + 0 * --fl[3];
	if ((format[*n + fl[0]] != '0' ||
	format[*n + fl[0] - 1] == '.') && ft_isdigit(format[*n + fl[0]]))
	{
		if (format[*n + fl[0] - 1] == '.')
		{
			fl[8] = 1;
			fl[6] = ft_atoi(&format[*n + fl[0]]);
		}
		else if (!(fl[8] *= 0))
		{
			if (format[*n + fl[0] - 1] != '0')
				fl[3] = 0;
			fl[1] = ft_atoi(&format[*n + fl[0]]);
		}
		while (format[*n + fl[0]] && ft_isdigit(format[*n + fl[0]]))
			fl[0]++;
	}
	else
		fl[0]++;
	return (0);
}

int	while_part2(const char *format, va_list ap, int *n, int fl[8])
{
	int				nega;

	nega = 0;
	if (format[*n + fl[0]] == '.' && ++fl[4])
	{
		fl[1] = (fl[6] && fl[8] == 1) ? fl[6] : fl[1];
		fl[6] = 0;
	}
	if (format[*n + fl[0]] == '*' && ++fl[5])
	{
		if (format[*n + fl[0] - 1] == '.' && !(fl[8] *= 0) && !(fl[8]++))
		{
			fl[6] = va_arg(ap, int);
			if ((unsigned int)fl[6] > (unsigned int)fl[1] && fl[6] < 0)
				fl[4] = (fl[3]) ? 0 : fl[4];
			nega = (!fl[6]) ? 1 : 0;
		}
		else if (!(fl[8] *= 0))
		{
			fl[3] = (format[*n + fl[0] - 1] != '0') ? 0 : fl[3];
			fl[1] = va_arg(ap, int);
		}
	}
	return (nega + while_part3(format, n, fl));
}

int	while_part1(const char *format, va_list ap, int *n, int fl[8])
{
	int				ret;
	int				nega;

	ret = 0;
	nega = 0;
	while (nega < 8)
		fl[nega++] = 0;
	if (format[*n] != '%')
		return (ft_putchar_fd(format[*n], 1, NULL));
	nega = 0;
	fl[0] = 1;
	while (format[*n + fl[0]] && (format[*n + fl[0]] == '-' ||
format[*n + fl[0]] == '0' || format[*n + fl[0]] == '.' ||
format[*n + fl[0]] == '*' || ft_isdigit(format[*n + fl[0]])))
		nega = while_part2(format, ap, n, fl);
	fl[0]--;
	nega = (!fl[6] && fl[4]) ? 1 : nega;
	fl[6] = (fl[1] < 0 && ++fl[2] && fl[6] < 0) ? 0 : fl[6];
	fl[6] = (fl[6] < 0) ? -fl[6] : fl[6];
	fl[1] = (fl[1] < 0) ? -fl[1] : fl[1];
	fl[6] = (nega) ? -1 : fl[6];
	if (format[*n + fl[0]] && format[*n + fl[0] + 1])
		ret = printf_choice(format, ap, *n, fl);
	*n = *n + fl[0] + 1;
	return (ret);
}

/*
**	fl : 0 -> between % and fl
**	fl : 1 -> digit before (width / padding)
**	fl : 2 -> number -
**	fl : 3 -> number 0
**	fl : 4 -> number .
**	fl : 5 -> number *
**	fl : 6 -> digit after (precision)
*/

int	ft_printf(const char *format, ...)
{
	int				n;
	int				n_pr;
	int				size;
	int				fl[8];
	va_list			ap;

	n = -1;
	n_pr = 0;
	va_start(ap, format);
	size = ft_strlen(format);
	while (++n < size)
		n_pr += while_part1(format, ap, &n, fl);
	va_end(ap);
	return (n_pr);
}
