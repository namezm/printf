#include "main.h"

/**
 * print_char - check code
 * by namezm & bouilla
 * @var: variadic list
 * Return: returns 1
 */
int print_char(va_list var)
{
	int i;
	char c;

	i = va_arg(var, int);
	if (i < 0)
		return (i);
	c = (char)i;
	return (write(1, &c, 1));
}
