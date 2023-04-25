#include "main.h"

/**
 * print_string - verification
 * by namezm & bouilla
 * @va: variadic
 * Return: string
 */
int print_string(va_list var)
{
	char *str;
	int len = 0;

	str = va_arg(var, char*);
	if ((unsigned long)var <= (unsigned long)str)
		return (-1);
	str = str == NULL ? "(null)" : str;
	while (*(str + len) != '\0')
		len++;
	return (write(1, str, len));
}
