#include "holberton.h"
/**
 * create_int - create an integer into the printf_buffer
 * @n: type long int to print
 * @stack: type struct va_arg where is allocated printf arguments
 *
 */
void create_int(stackvar *stack, long int n)
{
	int a;
	long int size = 1;
	long int i;
	long int j;

	n /= 10;
	i = n % 10;
	j = n;

	if (i < 0)
	{
		i = i * -1, j = j * -1, n = n * -1;
		stack->char1 = '-';

		if (stack->space)
		{
			stack->space = 0, stack->counter_b--;
		}
		create_buffer(stack);
	}
	else if (stack->char2 == '+')
	{
		stack->char1 = '+';
		create_buffer(stack);
		size = size * 10;
		while (size > 0)
		{
			a = n / size;
			stack->char1 = ('0' + a);
			create_buffer(stack);
			n = n - a * size;
			size = size / 10;
		}
	}
	stack->char1 = ('0' + i);
	create_buffer(stack);
}

/**
 * printf_int - create integer
 * @stack: type struct va_arg where is allocated printf arguments
 *
 */
void printf_int(stackvar *stack)
{
	int n;

	n = va_arg(*(stack->arguments), int);

	create_int(stack, (long int)n);
}

/**
 * printf_lint - create a long integer
 * @stack: type struct va_arg where is allocated printf arguments
 *
 */
void printf_lint(stackvar *stack)
{
	long int n;

	n = va_arg(*(stack->arguments), long int);

	create_int(stack, n);
}
