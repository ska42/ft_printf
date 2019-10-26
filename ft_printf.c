/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:31:09 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/26 20:56:05 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

int	printf_choice(const char *format, va_list ap, int n, int flags[7])
{
	int n_pr;
	unsigned long	ptdr;

	if (format[n + flags[0] + 1] == '%')
		n_pr = ft_putchar_fd('%', 1, flags);
	else if (format[n + flags[0] + 1] == 'c')
		n_pr = ft_putchar_fd((char)va_arg(ap, int), 1, flags);
	else if (format[n + flags[0] + 1] == 's')
		n_pr = ft_putstr_fd((char *)va_arg(ap, char *), 1, flags);
	else if (format[n + flags[0] + 1] == 'p')
	{
		ptdr = (unsigned long)va_arg(ap, void *);
		if (!flags[2] && !flags[3] && !flags[4] && !flags[5])
		{
			flags[1] = (ptdr) ? 0 : flags[1];
			flags[1] = (flags[1]) ? flags[1] - 1 : flags[1];
		}
		n_pr = ft_puthexa_pointer_fd(ptdr, 1, flags);
	}
	else if (format[n + flags[0] + 1] == 'i' ||
format[n + flags[0] + 1] == 'd')
		n_pr = ft_putint_fd((int)va_arg(ap, int), 1, flags);
	else if (format[n + flags[0] + 1] == 'u')
		n_pr = ft_putunsignedint_fd(
(unsigned int)va_arg(ap, unsigned int), 1, flags);
	else if (format[n + flags[0] + 1] == 'x')
		n_pr = ft_puthexa_fd(
(unsigned int)va_arg(ap, int), 1, flags);
	else if (format[n + flags[0] + 1] == 'X')
		n_pr = ft_puthexa_capitalize_fd(
(unsigned int)va_arg(ap, int), 1, flags);
	else
		n_pr = ft_putchar_fd(format[n + flags[0] + 1], 1, flags);
	return (n_pr);
}

/*
**	flags : 0 -> between % and flags
**	flags : 1 -> digit before (width / padding)
**	flags : 2 -> number -
**	flags : 3 -> number 0
**	flags : 4 -> number .
**	flags : 5 -> number *
**	flags : 6 -> digit after (precision)
*/

int	ft_printf(const char *format, ...)
{
	int				last;
	int				n;
	int				n_pr;
	int				size;
	int				nega;
	int				flags[7];
	va_list			ap;

	last = 0;
	n = -1;
	n_pr = 0;
	va_start(ap, format);
	size = ft_strlen(format);
	while (++n < size)
	{
		nega = 0;
		while (nega < 7)
			flags[nega++] = 0;
		if (!(nega *= 0) && format[n] == '%')
		{
			flags[0] = 1;
			while (format[n + flags[0]] && (format[n + flags[0]] == '-' ||
format[n + flags[0]] == '0' || format[n + flags[0]] == '.' ||
format[n + flags[0]] == '*' || ft_isdigit(format[n + flags[0]])))
			{
				if (format[n + flags[0]] == '-' && ++flags[2])
					flags[3] = 0;
				if (format[n + flags[0]] == '0' && ++flags[3] &&
format[n + flags[0] - 1] == '.')
					flags[6] = 0 + 0 * --flags[3];
				if (format[n + flags[0]] == '.' && ++flags[4] && flags[6])
				{
					flags[1] = (last == 1) ? flags[6] : flags[1];
					flags[6] = 0;
				}
				if (format[n + flags[0]] == '*' && ++flags[5])
				{
					if (format[n + flags[0] - 1] == '.')
					{
						flags[4] = (flags[3]) ? 0 : flags[4];
						last = 1;
						flags[6] = va_arg(ap, int);
						nega = (!flags[6]) ? 1 : 0;
					}
					else if (!(last *= 0))
						flags[1] = va_arg(ap, int);
				}
				if ((format[n + flags[0]] != '0' ||
format[n + flags[0] - 1] == '.') && ft_isdigit(format[n + flags[0]]))
				{
					if (format[n + flags[0] - 1] == '.')
					{
						last = 1;
						flags[6] = ft_atoi(&format[n + flags[0]]);
					}
					else if (!(last *= 0))
					{
						if (format[n + flags[0] - 1] != '0')
							flags[3] = 0;
						flags[1] = ft_atoi(&format[n + flags[0]]);
					}
					while (format[n + flags[0]] &&
ft_isdigit(format[n + flags[0]]))
						flags[0]++;
				}
				else
					flags[0]++;
			}
			flags[0]--;
			nega = (!flags[6] && flags[4]) ? 1 : nega;
			if (flags[1] < 0 && ++flags[2] && flags[6] < 0)
				flags[6] = 0;
			flags[6] = (flags[6] < 0) ? -flags[6] : flags[6];
			flags[1] = (flags[1] < 0) ? -flags[1] : flags[1];
			if (nega)
				flags[6] = -1;
			if (format[n + flags[0]] && format[n + flags[0] + 1])
				n_pr += printf_choice(format, ap, n, flags);
			n = n + flags[0] + 1;
		}
		else
			n_pr += ft_putchar_fd(format[n], 1, NULL);
	}
	va_end(ap);
	return (n_pr);
}
