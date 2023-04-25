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
		return (to_binary(p / 2) + to_binary(p % 2));
	dig = '0' + p;
	return (write(1, &dig, 1));
}
/**
 * oktob_to_binary - print numbers
 * @v: variadic list
 * Return: string length
 */
int oktob_to_binary(va_list v)
{
	return (tobinary(va_arg(v, unsigned int)));
}
