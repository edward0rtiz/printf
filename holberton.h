#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * C libraries
 * stdio.h: standard buffered input/output
 * stdlib.h: standard library definitions
 * stdarg.h: handle variable argument list
 * limits.h: implementation-dependent constants
 * unistd.h: standard symbolic constants and types
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * macros: C statements as a pre-processor directive.
 * LOWX - WIP
 * UPX - WIP
 * BUFFERSIZE - local buffer of 1024 chars in order to call write alap
 * TRUE - boolean flag for non-custom specifiers
 * FALSE - boolean flag for non-custom specifiers
 */

#define BUFFERSIZE 1024
#define TRUE (1 == 1)
#define FALSE !TRUE

/**
 * struct convert_match - match the conversion specifiers for printf
 * @s: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @func: type pointer to function for the conversion specifier
 *
 */

 /**typedef struct convert_match
{
	char s;
	void (*func)(stackvar *stack)
} convert_match;
 */
/**
 * struct stackvar - struct for required custom conversion specifiers
 * @char1: type char for buffer allocation
 * @char2: type char for validate n after %
 * @char3: type char for validate n n after %
 * @char4:
 * @error: type int replaces stdbool.h
 * @flag: type int for modifiers flags
 * @space: type int for space printing
 * @counter: type int for counter between index arrays
 * @counter_b: type int for counter between buffer and char
 * @buffer: type char pointer to buffer
 * @format: type char pointer to format str
 * @arguments:
 */
typedef struct stackvar
{
	int i;
	char char1;
	char char2;
	char char3;
	char char4;
	int error;
	int flag;
	int space;
	int counter;
	int counter_b;
	char *buffer;
	const char *format;
	va_list *arguments;
} stackvar;

stackvar *stackinit(va_list *arguments_list, const char *format);
void create_buffer(stackvar *stack);

#endif
