#include "main.h"

/**
 * l_cast - int to hexa
 * by namez & bouilla
 * @num: numbr
 * Return: string
 */
int l_cast(unsigned long num)
{
	char c;

	if (num >= 16)
		return (l_cast(num / 16) + l_cast(num % 16));
	c = num <= 9 ? '0' + num : 'a' + num - 10;
	return (write(1, &c, 1));
}
/**
 * oktob_pointer - verification
 * by namez & bouilla
 * @var: va_list args
 * Return: cp
 */
int oktob_pointer(va_list var)
{
	void *p = va_arg(var, void *);
	unsigned long x = (unsigned long) p;

	if (p == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (2 + l_cast(x));
}
