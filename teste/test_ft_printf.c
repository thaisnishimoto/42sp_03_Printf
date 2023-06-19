/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/19 12:17:06 by tmina-ni         ###   ########.fr       */
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
	int	result1;
	int	expected1;
	int	result2;
	int	expected2;
	int	result3;
	int	expected3;

	num = 100;
	printf("\n-------------------------\n");
	printf("TEST 3: print number\n");
	printf("-------------------------\n");
	printf("*Expected %%d\n");
	expected1 = printf("%d\n", num);
	printf("*Result ft_printf\n");
	result1 = ft_printf("%d\n", num);
	printf("\n");
	mu_assert_int_eq(expected1, result1);
	
	printf("*Expected %%i\n");
	expected2 = printf("%i\n", num);
	printf("*Result ft_printf\n");
	result2 = ft_printf("%i\n", num);
	printf("\n");
	mu_assert_int_eq(expected2, result2);
	
	printf("*Expected %%u\n");
	expected3 = printf("%u\n", num);
	printf("*Result ft_printf\n");
	result3 = ft_printf("%u\n", num);
	printf("\n");
	mu_assert_int_eq(expected3, result3);
}

MU_TEST(funtion_should_print_negative_int)
{
	int	num;
	int	result1;
	int	expected1;
	int	result2;
	int	expected2;
	int	result3;
	int	expected3;

	num = -42;
	printf("\n-------------------------\n");
	printf("TEST 4: print neg number\n");
	printf("-------------------------\n");
	printf("*Expected %%d\n");
	expected1 = printf("%d\n", num);
	printf("*Result ft_printf\n");
	result1 = ft_printf("%d\n", num);
	printf("\n");
	mu_assert_int_eq(expected1, result1);
	
	printf("*Expected %%i\n");
	expected2 = printf("%i\n", num);
	printf("*Result ft_printf\n");
	result2 = ft_printf("%i\n", num);
	printf("\n");
	mu_assert_int_eq(expected2, result2);
	
	printf("*Expected %%u\n");
	expected3 = printf("%u\n", num);
	printf("*Result ft_printf\n");
	result3 = ft_printf("%u\n", num);
	printf("\n");
}

MU_TEST(funtion_should_print_zero)
{
	int	num;
	int	result1;
	int	expected1;
	int	result2;
	int	expected2;
	int	result3;
	int	expected3;

	num = 0;
	printf("\n-------------------------\n");
	printf("TEST 5: print number %%i\n");
	printf("-------------------------\n");
	printf("*Expected %%d\n");
	expected1 = printf("%d\n", num);
	printf("*Result ft_printf\n");
	result1 = ft_printf("%d\n", num);
	printf("\n");
	mu_assert_int_eq(expected1, result1);
	
	printf("*Expected %%i\n");
	expected2 = printf("%i\n", num);
	printf("*Result ft_printf\n");
	result2 = ft_printf("%i\n", num);
	printf("\n");
	mu_assert_int_eq(expected2, result2);
	
	printf("*Expected %%u\n");
	expected3 = printf("%u\n", num);
	printf("*Result ft_printf\n");
	result3 = ft_printf("%u\n", num);
	printf("\n");
}

MU_TEST(funtion_should_print_hexadecimal)
{
	int	num;
	int	result1;
	int	expected1;
	int	result2;
	int	expected2;

	num = 42;
	printf("\n-------------------------\n");
	printf("TEST 6: print 42 base 16\n");
	printf("-------------------------\n");
	printf("*Expected lower %%x\n");
	expected1 = printf("%x\n", num);
	printf("*Result ft_printf\n");
	result1 = ft_printf("%x\n", num);
	printf("\n");
	mu_assert_int_eq(expected1, result1);
	
	printf("*Expected UPPER %%X\n");
	expected2 = printf("%X\n", num);
	printf("*Result ft_printf\n");
	result2 = ft_printf("%X\n", num);
	printf("\n");
	mu_assert_int_eq(expected2, result2);
}

MU_TEST(funtion_should_print_negative_hexadecimal)
{
	int	num;
	int	result1;
	int	expected1;
	int	result2;
	int	expected2;

	num = -1000;
	printf("\n-------------------------\n");
	printf("TEST 7: print -1000 base 16\n");
	printf("-------------------------\n");
	printf("*Expected lower %%x\n");
	expected1 = printf("%x\n", num);
	printf("*Result ft_printf\n");
	result1 = ft_printf("%x\n", num);
	printf("\n");
	mu_assert_int_eq(expected1, result1);
	
	printf("*Expected UPPER %%X\n");
	expected2 = printf("%X\n", num);
	printf("*Result ft_printf\n");
	result2 = ft_printf("%X\n", num);
	printf("\n");
	mu_assert_int_eq(expected2, result2);
}

MU_TEST(funtion_should_print_percent)
{
	int	result1;
	int	expected1;

	printf("\n-------------------------\n");
	printf("TEST 8: print char %% 3x\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected1 = printf("%% %% %%\n");
	printf("*Result ft_printf\n");
	result1 = ft_printf("%% %% %%\n");
	printf("\n");
	
	mu_assert_int_eq(expected1, result1);
}

MU_TEST(funtion_should_pointer_address)
{
	char	*ptr;
	int	result1;
	int	expected1;

	ptr = "Hello";
	printf("\n-------------------------\n");
	printf("TEST 9: print pointer\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected1 = printf("%p\n", ptr);
	printf("*Result ft_printf\n");
	result1 = ft_printf("%p\n", ptr);
	printf("\n");
	
	mu_assert_int_eq(expected1, result1);
}
MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(funtion_should_print_letter_a);
	MU_RUN_TEST(funtion_should_print_string);
	MU_RUN_TEST(funtion_should_print_int);
	MU_RUN_TEST(funtion_should_print_negative_int);
	MU_RUN_TEST(funtion_should_print_zero);
	MU_RUN_TEST(funtion_should_print_hexadecimal);
	MU_RUN_TEST(funtion_should_print_negative_hexadecimal);
	MU_RUN_TEST(funtion_should_print_percent);
	MU_RUN_TEST(funtion_should_pointer_address);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
