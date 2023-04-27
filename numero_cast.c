#include "main.h"
/**
 * numero_cast - integer to bin  oct hexa
 * @cp:  number
 * @to: int
 * @ca: condit
 * Return: string
 */
int numero_cast(unsigned int cp, unsigned int to, int ca)
{
	char c;

	if (cp >= to)
		return (numero_cast(n / to, to, ca)
			+ numero_cast(n % to, to, ca));
	c = ca ? 'A' : 'a';
	c = cp <= 9 ? '0' + cp : c + cp - 10;
	return (write(1, &c, 1));
}
