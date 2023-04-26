#include "main.h"

/**
 * oktob_octal - print numbers
 * by namezm & bouilla
 * @v: variadic list
 * Return: string length
 */
int oktob_octal(va_list v)
{
	return (number_cast(va_arg(v, unsigned int), 8, 0));
}
