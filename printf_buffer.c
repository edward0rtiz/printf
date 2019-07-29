#include "holberton.h"
/**
 * create_buffer - buffer that keeps different data types
 * @stack: type struct where is allocated printf arguments
 *
 */

void create_buffer(stackvar *stack)
{
	unsigned int new_b;
	unsigned int old_b;
	char *tmp;

	if (stack->buffer)
	{
		stack->buffer[stack->counter_b++] = stack->char1;
		if ((stack->counter_b + 1) % BUFFERSIZE == 0)
		{
			old_b = stack->counter_b + 1;
			new_b = old_b + BUFFERSIZE;
			tmp = realloc(stack->buffer, new_b, old_b);
			if (!tmp)
			{
				stack->error = 1;
			}
			else
				stack->buffer = tmp;
		}
	}
}

/**
 * place_buffer - place a str into a buffer
 * @stack: type struc where is allocated printf arguments
 * @str: type char pointr of string
 *
 */
void place_buffer(stackvar *stack, char *str)
{
	int i;
	int j;

	j = _strlen(str);

	for (i = 0; i < j; i++)
	{
		stack->char1 = *(str + i);
		create_buffer(stack);
	}
}
