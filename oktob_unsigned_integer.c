#include "main.h"

/**
 * oktob_unsigned_ - print numbers in decimal
 * by namezm & bouilla
 * @b: input number
 * Return: string length
 */
int oktob_unsigned_(unsigned int b)
{
	char dig;

	if (b >= 10)
		return (oktob_unsigned_(b / 10) + oktob_unsigned_(b % 10));
	dig = '0' + b;
	return (write(1, &dig, 1));
}
/**
 * oktob_unsigned_integer - print numbers
 * by namezm & bouilla
 * @v: variadic list
 * Return: string length
 */
int oktob_unsigned_integer(va_list v)
{
	return (oktob_unsigned_(va_arg(v, unsigned int)));
}
