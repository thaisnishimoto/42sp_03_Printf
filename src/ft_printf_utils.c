/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:11:48 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/19 01:18:29 by tmina-ni         ###   ########.fr       */
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

int	ft_print_ptr(va_list args)
{
	void	*ptr1;
	void	**ptr2;
	int		i;

	i = 0;
	ptr1 = va_arg(args, void*);
	ptr2 = &ptr1;
	while (ptr2[i])
		write(1, &ptr2[i++], 1);
	return (0);	
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

int	ft_printnbr_base16_lower(va_list args)
{
	char	*base;
	char	num[100];
	unsigned int	nbr;
	int		len;
	int		i;

	base = "0123456789abcdef";
	nbr = va_arg(args, int);
	if (nbr == 0)
		write(1, "0", 1);
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


int	ft_printnbr_base16_upper(va_list args)
{
	char	*base;
	char	num[100];
	unsigned int	nbr;
	int		len;
	int		i;

	base = "0123456789ABCDEF";
	nbr = va_arg(args, int);
	if (nbr == 0)
		write(1, "0", 1);
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
