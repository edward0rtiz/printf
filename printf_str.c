#include "holberton.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	return (c);

}
/**
 * *_strcpy - Copies the string pointed to by src.
 * @dest: Type char pointer
 * @src: Type char pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
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
void rev_string(char *s)
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
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	return (c);
}
