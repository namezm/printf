#include "main.h"

/**
 * print_char - check code
 * by namezm & bouilla
 * @va: variadic list
 * Return: returns 1
 */
int print_char(va_list va)
{
	int x;
	char c;

	x = va_arg(va, int);
	if (x < 0)
		return (x);
	c = (char)x;
	return (write(1, &c, 1));
}
