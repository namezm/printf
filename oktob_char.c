#include "main.h"

/**
 * oktob_char - verification
 * by namezm & bouilla
 *
 * @var: variadic
 * Return: returns 1
 */
int oktob_char(va_list var)
{
	int i;
	char c;

	i = va_arg(var, int);
	if (i < 0)
		return (i);
	c = (char)i;
	return (write(1, &c, 1));
}
