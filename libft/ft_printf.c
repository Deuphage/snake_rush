/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 11:50:58 by kescalie          #+#    #+#             */
/*   Updated: 2014/10/10 15:45:49 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

void			ft_option_choice(char format, void *o, int *cp)
{
	int				i;
	static t_func	options[] =

	{
	{'%', &ft_putstr_spe},
	{'c', &ft_putchar_spe},
	{'s', &ft_putstr_spe}
	};
	i = 0;
	while (options[i].fl)
	{
		if (format == '%')
			return (options[i].fct("%", cp));
		if (options[i].fl == format && format != 'd')
			return (options[i].fct(o, cp));
		i++;
	}
}

static void		ft_test_arg(char format, va_list ap, int *cp)
{
	int		i;

	if (format == 'd' || format == 'i')
	{
		i = va_arg(ap, int);
		ft_putnbr_spe(i, cp);
	}
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	int			cp;

	cp = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			ft_test_arg(*format, ap, &cp);
			ft_option_choice(*format, va_arg(ap, void*), &cp);
			format++;
		}
		else
		{
			ft_putchar(*format);
			format++;
			cp++;
		}
	}
	return (cp);
}
