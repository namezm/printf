#include "main.h"

/**
 * specifier_selector - verification
 * by namezm & bouilla
 * @format: characters
 * @va: variadic list
 * Return: string cp
 */
int specifier_selector(const char *format, va_list va)
{
	printer printers[] = {
	  {"c", print_char},
	  {"i", print_integer},
	  {"d", print_integer},
	  {NULL, NULL}
	};
	int j;

	j = 0;
	while (printers[j].print != NULL && *format != *(printers[j].type))
		j++;
	return (printers[j].print != NULL ? printers[j].print(va) : -1);
}

/**
 * _printf - printf function.
 * by namezm & bouilla
 * @format: string
 * Return: str + cp.
 */
int _printf(const char *format, ...)
{
	int i = 0, r, cp = 0, condition = 0;
	va_list va;
	char c = '%';

	va_start(va, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == c && condition == 0)
			condition = 1;
		else if (condition == 1)
		{
			r = specifier_selector(format + i, va);
			cp += r < 0 ? write(1, &c, 1)
			  + (format[i] == c ? 0 : write(1, format + i, 1)) : r;
			condition = 0;
		}
		else
			cp += write(1, format + i, 1);
		i++;
	}
	va_end(va);
	return (format == NULL ? -1 : cp);
}
