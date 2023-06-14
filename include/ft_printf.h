/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:34:34 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/14 16:11:48 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h> //original printf
#include <unistd.h> //write
#include <stdlib.h> //malloc, free
#include <stdarg.h> //va_start, va_arg, va_copy, va_end 
#include "../libft/libft.h" //my libft

int	ft_printf(const char *str, ...);

#endif
