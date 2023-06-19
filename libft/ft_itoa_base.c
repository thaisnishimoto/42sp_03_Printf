/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:38:28 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/19 18:03:23 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_base(char *base);
char	*ft_reverse_str(char *str);

//char	*ft_itoa_base(unsigned long int n, char *base)
//{
//	unsigned long	lnb;	
//	size_t			blen;
//	int		i;
//	char			buffer[100];
//	char		*num;
//
//	lnb = n;
//	blen = check_base(base);
//	if (blen < 2)
//		return (NULL);
//	i = 0;
//	if (lnb == 0)
//		buffer[i++] = '0';
//	while (lnb > 0)
//	{
//		buffer[i] = base[lnb % blen];
//		lnb = lnb / blen;
//		i++;
//	}
//	while (--i >= 0)
//		num = buffer[i]; 
//	return (num);
//}

char	*ft_itoa_base(unsigned long int n, char *base)
{
	unsigned long	lnb;	
	size_t			blen;
	int		i;
	char		buffer[100];
	char		*num;

//	buffer = NULL;
	lnb = n;
	blen = check_base(base);
	if (blen < 2)
		return (NULL);
	i = 0;
	if (lnb == 0)
		buffer[i++] = '0';
	while (lnb > 0)
	{
		buffer[i] = base[lnb % blen];
		lnb = lnb / blen;
		i++;
	}
//	buffer[i] = '\0';
	num = ft_reverse_str(buffer); 
	return (num);
}

char	*ft_reverse_str(char *str)
{
	int	len;
	int	i;
	char	*str_rev;

	str_rev = NULL;
	len = ft_strlen(str);
	str_rev = malloc(len * sizeof(char));
	i = 0;
	while (len >= 0)
	{
		str_rev[--len] = str[i++];
	}
	return (str_rev);
}

size_t	check_base(char *base)
{
	size_t	blen;
	int		i;
	int		j;

	blen = ft_strlen(base);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[i] != base[j] && base[j])
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (blen);
}
