/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/14 16:10:14 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../include/ft_printf.h"
#include "../libft/libft.h"

MU_TEST(funtion_should_print_letter_a)
{
	int	len;
	char	c;
//	char	*result = NULL;
//	char    *expected[] = {"1st line.\n", "2nd line.\n"};

	c = 'a';
	printf("\n----------------------\n");
	printf(" TEST 1: print single char");
	printf("\n----------------------\n");
	len = ft_printf("Imprimir: %c", c);
	printf("%d\n", len);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(funtion_should_print_letter_a);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}