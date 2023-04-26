#include "main.h"

/**
 * oktob_hexadecimal - print numbers
 * by namezm & bouilla
 * @v: variadic list
 * Return: string length
 */
int oktob_hexadecimal(va_list v)
{
	return (number_cast(va_arg(v, unsigned int), 16, 0));
}
