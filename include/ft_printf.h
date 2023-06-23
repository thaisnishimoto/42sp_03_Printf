/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:34:34 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/23 13:02:12 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h> //original printf
# include <unistd.h> //write
# include <stdlib.h> //malloc, free
# include <stdarg.h> //va_start, va_arg, va_copy, va_end 
# include "../libft/libft.h" //my libft

# ifndef LOW_HEXBASE
#  define LOW_HEXBASE "0123456789abcdef"
# endif

# ifndef UPP_HEXBASE
#  define UPP_HEXBASE "0123456789ABCDEF"
# endif

int		ft_printf(const char *str, ...);
int		ft_printlen(const char *str);
int		ft_print_char(va_list args);
int		ft_print_str(va_list args);
int		ft_print_nbr(va_list args, const char format, char *flag_buffer);
int		ft_printnbr_base16(va_list args, char *base, char *flag_buffer);
int		ft_print_ptr(va_list args);

//bonus flags
int		ft_check_flags(const char *format);
char	*ft_get_flag(const char *format);

#endif
