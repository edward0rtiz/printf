#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * ret_buff - prints input buffer
 * @str: buffer to print
 * @n: type unsigned int
 * Return: STDOUT_FILE
 *
 */
void ret_buff(char *str, unsigned int n)
{
	write(STDOUT_FILENO, str, l);
}

/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
<<<<<<< HEAD
	unsigned int c = 0;
=======
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
>>>>>>> 3b8708970ef8812c1fced7fccb71f19c831c387a

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
<<<<<<< HEAD
 * *_strcpy - Copies the string pointed to by src.
 * @dest: Type char pointer
 * @src: Type char pointer
 * Return: Always 0.
 */
int *_strcpy(char *dest, char *src)
{

	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * rev_string - Print a string, in reverse followed by a new line.
 * @s: Type char pointer
 * Return: Always 0.
 */
int rev_string(char *s)
{
	int a, b;
	int let;

	for (a = 0; s[a] != 0; a++)
	{
	}
	b = 0;
	a = a - 1;
	while (b < a)
	{
		let = s[a];
		s[a] = s[b];
		s[b] = let;
		b++;
		a--;
	}
}
/**
=======
>>>>>>> 3b8708970ef8812c1fced7fccb71f19c831c387a
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
