#include "holberton.h"
/**
 * printf_r_str - printf str in reverse placed into buffer
 * @stack: type struct va_arg where is allocated printf arguments
 * Return: cp
 *
 */

void printf_r_str(stackvar *stack)
{
	int i = 0;
	int j;
	int k;
	char *str;
	char *cp;

	str = va_arg(*(stack->arguments), char *);
	k = _strlen(str);

	if (k == 1)
	{
		stack->char1 = str[0];
		create_buffer(stack);
	}
	else
	{
		cp = calloc(k + 1, sizeof(char));
		for (i = k - 1, j = 0; i >= 0; i--, j++)
			*(cp + j) = *(str + i);

		place_buffer(stack, cp);
		free(cp);
	}
}
