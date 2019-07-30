#include "holberton.h"
/**
 * printf_exclusive_string - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list val)
{
	char *s;
	int i, len;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			if ((s[i] < 32 && s[i] > 0) || s[i] >= 127)
			{
				_putchar('\\');
				_putchar('x');
				cast = s[i];
				if (cast < 16)
					_putchar('0');
				printf_HEX_aux(cast);
				i++;
			}
			_putchar(s[i]);
		}
		return (len);
	}
}
