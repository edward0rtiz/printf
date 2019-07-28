#include "holberton.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: Always 0.
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
