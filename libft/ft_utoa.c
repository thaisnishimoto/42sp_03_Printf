/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:38:28 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/19 12:49:46 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_n_len(unsigned long lnb);
static size_t	ft_n_sign(unsigned long lnb);

char	*ft_utoa(unsigned int n)
{
	unsigned long	lnb;	
	size_t	sign;
	size_t	len;
	char	*num_chars;

	lnb = n;
	sign = ft_n_sign(lnb);
	if (sign == 1)
		lnb = -lnb;
	len = ft_n_len(lnb) + sign;
	num_chars = malloc((len + 1) * sizeof(char));
	if (num_chars == NULL)
		return (NULL);
	num_chars[len--] = '\0';
	if (lnb == 0)
		num_chars[len] = '0';
	while (lnb > 0)
	{
		num_chars[len--] = (lnb % 10) + '0';
		lnb = lnb / 10;
	}
	if (sign == 1)
		num_chars[len] = '-';
	return (num_chars);
}

static size_t	ft_n_sign(unsigned long lnb)
{
	size_t	sign;

	sign = 0;
	if (lnb < 0)
		sign = 1;
	return (sign);
}

static size_t	ft_n_len(unsigned long lnb)
{
	size_t	len;

	len = 0;
	if (lnb == 0)
		len = 1;
	while (lnb > 0)
	{
		lnb = lnb / 10;
		len++;
	}
	return (len);
}
