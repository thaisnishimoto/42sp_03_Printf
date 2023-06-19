/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 00:23:34 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/19 00:51:27 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

//find %
//check for flags
//check specifier and return pointer to it
//va_arg

int	num_args(const char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] != '%')
			{
				i++;
				count++;
			}
		}
		else
			i++;
	}
	return (count);
}

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
			if (str[i] == 'c')
				len += ft_print_char(args);
			else if (str[i] == 's')
				len += ft_print_str(args);
			else if (str[i] == 'p')
				len += ft_print_ptr(args);
			else if (str[i] == 'd' || str[i] == 'i')
				len += ft_print_nbr(args);
			else if (str[i] == 'x')
				len += ft_printnbr_base16_lower(args);
			else if (str[i] == 'X')
				len += ft_printnbr_base16_upper(args);
			else if (str[i] == '%')
			{
				write(1, &str[i], 1);
				len++;
			}
		}
		i++;
	}
	va_end(args);
	return (len);
}
