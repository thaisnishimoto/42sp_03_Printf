/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:11:48 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/20 18:32:26 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printlen(const char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			i++;
		}
		else
		{
			i++;
			len++;
		}
	}
	return (len);
}

int	ft_print_char(va_list args)
{
	int	c;

	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(va_list args)
{
	char	*str;
	int		len;

	len = 0;
	str = va_arg(args, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[len])
		write(1, &str[len++], 1);
	return (len);
}

int	ft_print_ptr(va_list args)
{
	unsigned long	num;
	char			*base;
	int				len;
	char			*address;

	len = 0;
	base = "0123456789abcdef";
	num = va_arg(args, unsigned long);
	if (num == 0)
	{
		len = 5;
		write(1, "(nil)", len);
		return (len);
	}
	write(1, "0x", 2);
	address = ft_utoa_base(num, base);
	while (address[len])
		write(1, &address[len++], 1);
	free (address);
	return (len + 2);
}

int	ft_print_nbr(va_list args)
{
	char	*num;
	int		len;
	int		nbr;

	len = 0;
	nbr = va_arg(args, int);
	num = ft_itoa(nbr);
	while (num[len])
		write(1, &num[len++], 1);
	free(num);
	return (len);
}

int	ft_print_unsigned_nbr(va_list args)
{
	char			*num;
	int				len;
	unsigned int	nbr;

	len = 0;
	nbr = va_arg(args, int);
	num = ft_utoa(nbr);
	while (num[len])
		write(1, &num[len++], 1);
	free (num);
	return (len);
}

int	ft_printnbr_base16(va_list args, char x_case)
{
	char			*base;
	char			num[100];
	unsigned int	nbr;
	int				len;
	int				i;

	if (x_case == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	nbr = va_arg(args, int);
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	i = 0;
	while (nbr > 0)
	{
		num[i++] = base[nbr % 16];
		nbr = nbr / 16;
	}
	len = i;
	while (--i >= 0)
		write(1, &num[i], 1);
	return (len);
}
