/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:11:48 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/18 16:01:49 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

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
	while (str[len])
		write(1, &str[len++], 1);
	return (len);
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

void	ft_putnbr_base(int nbr, char *base)
{
	long		lnbr;
	int			blen;
	char		digits[100];
	int			i;

	lnbr = nbr;
	blen = check_one(base);
	check_two(base);
	if (blen < 2)
		return ;
	if (lnbr == 0)
		write(1, "0", 1);
	if (lnbr < 0)
	{
		lnbr = -lnbr;
		write(1, "-", 1);
	}
	i = 0;
	while (lnbr > 0)
	{
		digits[i++] = base[lnbr % blen];
		lnbr = lnbr / blen;
	}
	while (--i >= 0)
		write(1, &digits[i], 1);
}

