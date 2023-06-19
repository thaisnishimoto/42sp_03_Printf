/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 00:23:34 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/19 17:29:25 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_print_format(const char *format, va_list args);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = ft_printlen(str);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
			write(1, &str[i], 1);
		else if (str[i] == '%')
		{		
			i++;
			len += ft_print_format(&str[i], args);
		}
		i++;
	}
	va_end(args);
	return (len);
}

static int	ft_print_format(const char *format, va_list args)
{
	int	len;

	len = 0;
	if (*format == 'c')
		len += ft_print_char(args);
	else if (*format == 's')
		len += ft_print_str(args);
	else if (*format == 'p')
		len += ft_print_ptr(args);
	else if (*format == 'd' || *format == 'i')
		len += ft_print_nbr(args);
	else if (*format == 'u')
		len += ft_print_unsigned_nbr(args);
	else if (*format == 'x')
		len += ft_printnbr_base16(args, 'x');
	else if (*format == 'X')
		len += ft_printnbr_base16(args, 'X');
	else if (*format == '%')
	{
		write(1, "%", 1);
		len++;
	}
	return (len);
}
