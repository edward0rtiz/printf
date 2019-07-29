#include "holberton.h"
/**
 * printf_max_l_h - len modifiers for ALL non-custom conversion specifiers
 * @stack: type struct va_arg where is allocated printf arguments
 * Return: cp
 *
 */
void (*printf_max_l_h(stackvar *stack))(stackvar *)
{
	int i = 0;
	int j;
	char cv = stack->char2;
	static const char mod[] = "hl+#";
	static convert_l_h spec[] = {
		{'d', printf_int}, {'i', printf_int},
	    /*  {'u', printf_uli}, {'o', printf_oct},
/* {'x', printf_lx}, {'X', printf_ux}, */
/*  {'%', printf_per}, {'b', printf_bin}, */
/*  {'p', printf_p}, {'c', printf_char}, {'S', printf_str_h}, */
		{'r', printf_r_str}, {'R', printf_rot13}, {'\0', NULL}
	};
	static convert_l_h mod_l[] = { {'d', printf_lint}, {'i', printf_lint},
/*      {'x', printf_lox}, {'X', printf_loxu}, {'o', printf_loct},*/
/*      {'u', printf_uli}, {'\0', NULL} */
	};
	for (j = 0; *(mod + j) != '\0'; j++)
	{
		if (*(mod + j) == stack->char2)
		{
			stack->flag = 1, cv = stack->char3;
		}
	}
	while (TRUE)
	{
		if (*(spec + i).s == '\0')
		{
			if (stack->flag)
			{
				stack->i++;
			}
			return (NULL);
		}
		if (*(spec + i).s == cv)
		{
			if (stack->flag)
			{
				stack->i = i + 2;
			}
			else
			{
				stack->i++;
			}
			if (stack->char2 == 'l')
				return (*(mod_l + i).func);
			return (*(spec + i).func);
		}
		i++;
	}
}
