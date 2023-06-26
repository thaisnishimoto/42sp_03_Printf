/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/26 15:23:43 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "limits.h"
#include "../include/ft_printf.h"

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
	mu_assert_int_eq(expected3, result3);
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
	mu_assert_int_eq(expected3, result3);
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

MU_TEST(funtion_should_print_pointer_address)
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

MU_TEST(funtion_should_print_pointer_NULL)
{
	char	*ptr;
	int	result1;
	int	expected1;

	ptr = NULL;
	printf("\n-------------------------\n");
	printf("TEST 10: print NULL pointer\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected1 = printf("%p\n", ptr);
	printf("*Result ft_printf\n");
	result1 = ft_printf("%p\n", ptr);
	printf("\n");
	
	mu_assert_int_eq(expected1, result1);
}

MU_TEST(funtion_should_print_neg_1_for_format_NULL)
{
	int	result1;
	int	expected1;

	printf("\n-------------------------\n");
	printf("TEST 11: print -1 for format null\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected1 = printf(0);
	printf("*Result ft_printf\n");
	result1 = ft_printf(0);
	printf("\n");
	
	printf("Returned values: %d %d\n", expected1, result1);
	mu_assert_int_eq(expected1, result1);
}

MU_TEST(funtion_should_print_multiple_strings)
{
	int	result1;
	int	expected1;

	printf("\n-------------------------\n");
	printf("TEST 12: print multiple strings\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected1 = printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	printf("\n");
	printf("*Result ft_printf\n");
	result1 = ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	printf("\n");
	
	mu_assert_int_eq(expected1, result1);
}

MU_TEST(funtion_should_print_NULL_string)
{
	char	*str;
	int	result1;
	int	expected1;

	str = NULL;
	printf("\n-------------------------\n");
	printf("TEST 13: print NULL string\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected1 = printf("%s", str);
	printf("\n");
	printf("*Result ft_printf\n");
	result1 = ft_printf("%s", str);
	printf("\n");
	
	mu_assert_int_eq(expected1, result1);
}

MU_TEST(funtion_should_print_hexadecimal_long_min)
{
	int	num;
	int	result1;
	int	expected1;

	num = -2147483647;
	printf("\n-------------------------\n");
	printf("TEST 14: print -2147483647 base 16\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected1 = printf("%x", num);
	printf("\n");
	printf("*Result ft_printf\n");
	result1 = ft_printf("%x", num);
	printf("\n");
	
	mu_assert_int_eq(expected1, result1);
}

MU_TEST(funtion_should_print_hexadecimal_zero)
{
	int	num;
	int	result1;
	int	expected1;

	num = 0;
	printf("\n-------------------------\n");
	printf("TEST 15: print 0 base 16\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected1 = printf("%x", num);
	printf("\n");
	printf("*Result ft_printf\n");
	result1 = ft_printf("%x", num);
	printf("\n");
	
	mu_assert_int_eq(expected1, result1);
}

MU_TEST(funtion_should_print_0x_before_hexadecimal)
{
	int	num;
	int	result1;
	int	expected1;

	num = 100;
	printf("\n-------------------------\n");
	printf("TEST 16 - bonus: flag #\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected1 = printf("%#x | %#X", num, num);
	printf("\n");
	printf("*Result ft_printf\n");
	result1 = ft_printf("%#x | %#X", num, num);
	printf("\n");
	
	mu_assert_int_eq(expected1, result1);
}

MU_TEST(funtion_shouldnt_print_0x_before_hexadecimal_0)
{
	int	num;
	int	result1;
	int	expected1;

	num = 0;
	printf("\n-------------------------\n");
	printf("TEST 17 - bonus: flag #\n");
	printf("-------------------------\n");
	printf("*Expected\n");
	expected1 = printf("%#x | %#X", num, num);
	printf("\n");
	printf("*Result ft_printf\n");
	result1 = ft_printf("%#x | %#X", num, num);
	printf("\n");
	
	mu_assert_int_eq(expected1, result1);
}

MU_TEST(funtion_should_print_sign_before_positive_nbr)
{
	int	num;
	int	n_num;
	int	result1;
	int	expected1;
	int	result2;
	int	expected2;

	num = 42;
	n_num = -42;
	printf("\n-------------------------\n");
	printf("TEST 18 - bonus: flag +\n");
	printf("-------------------------\n");
	printf("*Expected %%d\n");
	expected1 = printf("%+d | %+d", num, n_num);
	printf("\n");
	printf("*Result ft_printf %%d\n");
	result1 = ft_printf("%+d | %+d", num, n_num);
	printf("\n");
	printf("\n");
	mu_assert_int_eq(expected1, result1);
	
	printf("*Expected %%i\n");
	expected2 = printf("%+i | %+i", num, n_num);
	printf("\n");
	printf("*Result ft_printf %%i\n");
	result2 = ft_printf("%+i | %+i", num, n_num);
	printf("\n");
	mu_assert_int_eq(expected2, result2);
}

MU_TEST(funtion_should_print_sign_before_zero)
{
	int	num;
	int	result1;
	int	expected1;
	int	result2;
	int	expected2;

	num = 0;
	printf("\n-------------------------\n");
	printf("TEST 19 - bonus: flag +\n");
	printf("-------------------------\n");
	printf("*Expected %%d\n");
	expected1 = printf("%+d", num);
	printf("\n");
	printf("*Result ft_printf %%d\n");
	result1 = ft_printf("%+d", num);
	printf("\n");
	printf("\n");
	mu_assert_int_eq(expected1, result1);

	printf("*Expected %%i\n");
	expected2 = printf("%+i", num);
	printf("\n");
	printf("*Result ft_printf %%i\n");
	result2 = ft_printf("%+i", num);
	printf("\n");
	mu_assert_int_eq(expected2, result2);
}

MU_TEST(funtion_should_print_space_before_positive_nbr)
{
	int	num;
	int	n_num;
	int	result1;
	int	expected1;
	int	result2;
	int	expected2;

	num = 42;
	n_num = -42;
	printf("\n-------------------------\n");
	printf("TEST 20 - bonus: flag space\n");
	printf("-------------------------\n");
	printf("*Expected %%d\n");
	expected1 = printf("% d | % d", num, n_num);
	printf("\n");
	printf("*Result ft_printf %%d\n");
	result1 = ft_printf("% d | % d", num, n_num);
	printf("\n");
	printf("\n");
	mu_assert_int_eq(expected1, result1);
	
	printf("*Expected %%i\n");
	expected2 = printf("% i | % i", num, n_num);
	printf("\n");
	printf("*Result ft_printf %%i\n");
	result2 = ft_printf("% i | % i", num, n_num);
	printf("\n");
	mu_assert_int_eq(expected2, result2);
}

MU_TEST(funtion_should_print_space_before_zero)
{
	int	num;
	int	result1;
	int	expected1;
	int	result2;
	int	expected2;

	num = 0;
	printf("\n-------------------------\n");
	printf("TEST 21 - bonus: flag space\n");
	printf("-------------------------\n");
	printf("*Expected %%d\n");
	expected1 = printf("% d", num);
	printf("\n");
	printf("*Result ft_printf %%d\n");
	result1 = ft_printf("% d", num);
	printf("\n");
	printf("\n");
	mu_assert_int_eq(expected1, result1);

	printf("*Expected %%i\n");
	expected2 = printf("% i", num);
	printf("\n");
	printf("*Result ft_printf %%i\n");
	result2 = ft_printf("% i", num);
	printf("\n");
	mu_assert_int_eq(expected2, result2);
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
	MU_RUN_TEST(funtion_should_print_pointer_address);
	MU_RUN_TEST(funtion_should_print_pointer_NULL);
	MU_RUN_TEST(funtion_should_print_neg_1_for_format_NULL);
	MU_RUN_TEST(funtion_should_print_multiple_strings);
	MU_RUN_TEST(funtion_should_print_NULL_string);
	MU_RUN_TEST(funtion_should_print_hexadecimal_long_min);
	MU_RUN_TEST(funtion_should_print_hexadecimal_zero);
	MU_RUN_TEST(funtion_should_print_0x_before_hexadecimal);
	MU_RUN_TEST(funtion_shouldnt_print_0x_before_hexadecimal_0);
	MU_RUN_TEST(funtion_should_print_sign_before_positive_nbr);
	MU_RUN_TEST(funtion_should_print_sign_before_zero);
	MU_RUN_TEST(funtion_should_print_space_before_positive_nbr);
	MU_RUN_TEST(funtion_should_print_space_before_zero);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
