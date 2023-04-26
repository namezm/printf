#include "main.h"

/**
 * *tobinary - verification
 * by namezm & bouilla
 * @p: input number
 * Return: string length
 */
int tobinary(unsigned int p)
{
	char dig;

	if (p >= 2)
		return (tobinary(p / 2) + tobinary(p % 2));
	dig = '0' + p;
	return (write(1, &dig, 1));
}
/**
 * oktob_to_binary - to binary
 * @v: variadic
 * Return: string
 */
int oktob_to_binary(va_list v)
{
	return (tobinary(va_arg(v, unsigned int)));
}
