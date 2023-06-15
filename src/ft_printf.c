/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:11:48 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/15 18:46:13 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printlen(const char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (str[i] == '%')
	{
		i++;
		if (str[i] == '%')
		{
			i++;
			len++;
		}
	}
	else
	{
		i++;
		len++;
	}
	return (len);
}

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
	int	i;
	int	j;
	int	count;
	int	c;

	i = 0;
	j = 0;
	count = num_args(str);
	va_start(args, str);
	while (str[i])
	{
		while (str[i] && str[i] != '%')
		{
			write(1, &str[i], 1);
			i++;
		}
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'd')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				i++;
			}
		}
	}
	va_end(args);
	return (0);
}
