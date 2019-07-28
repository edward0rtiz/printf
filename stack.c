#include "holberton.h"
/**
 * stackinit - stock variables
 * @format: type char string type input
 * @arguments_list: type variadic of arguments
 * return: stack
 */

stackvar *stackinit(va_list *arguments_list, const char *format)
{
	stackvar *stack;

	stack = malloc(sizeof(stackvar) * 1);
	if (stack)
	{
		stack->i = 0;
		stack->format = format;
		stack->arguments = arguments_list;
		stack->flag = 0;
		stack->buffer = calloc(BUFFERSIZE, sizeof(char));
		stack->counter_b = 0;
		if (!stack->buffer)
		{
			stack->error = 1;
		}
		else
		{
			stack->error = 0;
     		}
	}
	return(stack);
}
