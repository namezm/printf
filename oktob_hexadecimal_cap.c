#include "main.h"

/**
 * oktob_hexadecimal_cap - print numbers
 * by namezm & bouilla
 * @v: variadic list
 * Return: string length
 */
int oktob_hexadecimal_cap(va_list v)
{
	return (number_cast(va_arg(v, unsigned int), 16, 1));
}
