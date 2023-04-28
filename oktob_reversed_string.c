#include "main.h"

/**
 * reversed_help - verification
 * @str: string
 * Return: string
 */
int reversed_help(char *str)
{
	if (*str == '\0')
		return (0);
	return (reversed_help(str + 1) + write(1, str, 1));
}
/**
 * oktob_reversed_string - verification
 * @var: variadic
 * Return: string
 */
int oktob_reversed_string(va_list var)
{
	return (reversed_help(va_arg(var, char *)));
}
