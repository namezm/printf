#include "main.h"
/**
 *_printf - produces output according to a format
 *By namezm & bouilla
 *@format: character string
 *Return: number of characters printed
 *
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, cp = 0, index_buf = 0;
	va_list args;
	int (*function)(va_list, char *, unsigned int);
	char *str;

	va_start(args, format), str = malloc(sizeof(char) * 1024);
	if (!format || !str || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{	print_str(str, index_buf), free(str), va_end(args);
				return (-1);
			}
			else
			{	function = get_print_func(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					handl_str(str, format[i], index_buf), cp++, i--;
				}
				else
				{
					cp += function(args, str, index_buf);
					i += ev_print_func(format, i + 1);
				}
			} i++;
		}
		else
			handl_str(str, format[i], index_buf), cp++;
		for (index_buf = cp; index_buf > 1024; index_buf -= 1024)
			;
	}
	print_str(str, index_buf), free(str), va_end(args);
	return (cp);
}
