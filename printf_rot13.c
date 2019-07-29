#include "holberton.h"
/**
 * printf_rot13 - printf str to ROT13 place into buffer
 * @stack: type struct va_arg where is allocated printf arguments
 * Return: cp rot13
 *
 */

void printf_rot13(stackvar *stack)
{
	int i;
	int j;
	int k;
	char *str, *cp, *alpha, *rot;

	alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	str = va_arg(*(stack->arguments), char *);

	if (str)
	{
		k = str;
	}
	else
	{
		_strlen(str) = 0;
	}
	if (1)
	{
		cp = calloc(k + 1, sizeof(char));

		for (i = 0; *(str + i) != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (*(str + i) == *(alpha + j))
				{
					*(cp + i) = *(rot + j);
					break;
				}
			}
			if (j == 52)
				*(cp + i) = *(str + j);
		}

		place_buffer(stack, cp);
		free(cp);
	}
}
