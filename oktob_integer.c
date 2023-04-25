#include "main.h"

/**
 * tostring - integer to dec
 * by namezm & bouilla
 * @n: number
 *
 * Return: string
 */
int tostring(const int n)
{
	char ope = '-', dig;

	if (n < 0)
	{
		if (n == INT_MIN)
			return (tostring(n / 10) + tostring(-(n % 10)));
		return (write(1, &ope, 1) + tostring(-n));
	}
	if (n >= 10)
		return (tostring(n / 10) + tostring(n % 10));
	dig = '0' + n;
	return (write(1, &dig, 1));
}
/**
 * oktob_integer - print integer
 * by namezm & bouilla
 * @var: variadic
 * Return: tostring
 */
int oktob_integer(va_list var)
{
	return (tostring(va_arg(var, int)));
}
