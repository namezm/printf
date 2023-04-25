#include "main.h"

/**
 * to_string - integer to decimal
 * by namezm & bouilla
 * @n: number
 * Return: string
 */
int to_string(const int n)
{
	char sign = '-', digit;

	if (n < 0)
	{
		if (n == INT_MIN)
			return (to_string(n / 10) + to_string(-(n % 10)));
		return (write(1, &sign, 1) + to_string(-n));
	}
	if (n >= 10)
		return (to_string(n / 10) + to_string(n % 10));
	digit = '0' + n;
	return (write(1, &digit, 1));
}
/**
 * print_integer - print numbers
 * by namezm & bouilla
 * @var: variadic
 * Return: string
 */
int print_integer(va_list var)
{
	return (to_string(va_arg(var, int)));
}
