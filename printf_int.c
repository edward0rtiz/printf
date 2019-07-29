#include "holberton.h"
/**
 * printf_int - create integer
 * @val: arguments.
 * Return: length of the number.
 *
 */
int printf_int(va_list val)
{
	unsigned int t;
	unsigned int aux;
	int aux1, n;
	unsigned int aux2;
	unsigned int mns = 45;

	n = va_arg(val, int);
	t = 0;
	aux =  n > 0 ? n : n * (-1);
	aux2 = 10;
	if (n < 0)
		_putchar(mns);
	n = aux;
	while (aux != 0)
	{
		aux = aux / 10;
		t++;
	}
	for (; t > 1; t--)
	{
		aux1 = t - 3;
		for (; aux1 >= 0; aux1--)
		{
			aux2 = 10 * aux2;
		}
		aux = n / aux2;
		n = n % aux2;
		_putchar(aux + '0');
		aux2 = 10;
	}
	_putchar(n + '0');
	return (aux);
}
