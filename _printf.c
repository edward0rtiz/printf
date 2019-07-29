#include "holberton.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_string},
		{"%c", printf_char}
	};
	va_list args;
	int i, j, len = 0, len_s, lena = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	i = 0;

	while (format[i] != '\0')
	{
		j = 1;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len_s = m[j].f(args);
				i = i + 2;
				break;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len = len + len_s;
	}
	len = (len + i) / 2;
	va_end(args);
	return (len);
}
