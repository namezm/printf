#include "main.h"

/**
 * number_cast - cast an integer to binary, octal, hexadecimal
 * by namezm & bouilla
 * @nb: input number
 * @base: integer
 * @c: condition
 * Return: string length
 */
int number_cast(unsigned int nb, unsigned int base, int c)
{
	char ca;

	if (nb >= base)
		return (number_cast(nb / base, base, c)
			+ number_cast(nb % base, base, c));
	ca = c ? 'A' : 'a';
	ca = nb <= 9 ? '0' + nb : ca + nb - 10;
	return (write(1, &ca, 1));
}
