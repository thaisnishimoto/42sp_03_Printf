/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/18 02:19:22 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../include/ft_printf.h"
#include "../libft/libft.h"

MU_TEST(funtion_should_print_letter_a)
{
	char	c;
	int	result1;
	int	expected1;

	c = 'a';
	printf("\n-------------------------\n");
	printf("TEST 1: print single char\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected1 = printf("%c\n", c);
	printf("*Result ft_printf\n");
	result1 = ft_printf("%c\n", c);
	printf("\n");
	
	mu_assert_int_eq(expected1, result1);
}

MU_TEST(funtion_should_print_string)
{
	char	*str = "Hello world!";
	int	result2;
	int	expected2;

	printf("\n-------------------------\n");
	printf("TEST 2: print string\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected2 = printf("%s\n", str);
	printf("*Result ft_printf\n");
	result2 = ft_printf("%s\n", str);
	printf("\n");
	
	mu_assert_int_eq(expected2, result2);
}

MU_TEST(funtion_should_print_int)
{
	int	num;
	int	result3;
	int	expected3;

	num = 100;
	printf("\n-------------------------\n");
	printf("TEST 3: print number\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected3 = printf("%d\n", num);
	printf("*Result ft_printf\n");
	result3 = ft_printf("%d\n", num);
	printf("\n");
	
	mu_assert_int_eq(expected3, result3);
}

MU_TEST(funtion_should_print_negative_int)
{
	int	num;
	int	result3;
	int	expected3;

	num = -42;
	printf("\n-------------------------\n");
	printf("TEST 4: print number\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected3 = printf("%d\n", num);
	printf("*Result ft_printf\n");
	result3 = ft_printf("%d\n", num);
	printf("\n");
	
	mu_assert_int_eq(expected3, result3);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(funtion_should_print_letter_a);
	MU_RUN_TEST(funtion_should_print_string);
	MU_RUN_TEST(funtion_should_print_int);
	MU_RUN_TEST(funtion_should_print_negative_int);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
