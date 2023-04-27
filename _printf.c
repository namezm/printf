#include "main.h"

/**
 * specifiers_nb - verification
 * by namezm & bouilla
 *
 * @format: characters
 * @va: variadic
 * Return: string cp
 */
int specifiers_nb(const char *format, va_list va)
{
	oktob oktobs[] = {
	  {"c", oktob_char},
	  {"i", oktob_integer},
	  {"d", oktob_integer},
	  {"s", oktob_string},
	  {"b", oktob_to_binary},
	  {"u", oktob_unsigned_integer},
	  {"o", oktob_octal},
	  {"x", oktob_hexadecimal},
	  {"S", oktob_non_printable},
	  {"X", oktob_hexadecimal_cap},
	  {"p", oktob_pointer},
	  {"R", oktob_rot13},
	  {NULL, NULL}
	};
	int j;

	j = 0;
	while (oktobs[j].print != NULL && *format != *(oktobs[j].type))
		j++;
	return (oktobs[j].print != NULL ? oktobs[j].print(va) : -1);
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
	va_list var;
	char c = '%';

	va_start(var, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == c && condition == 0)
			condition = 1;
		else if (condition == 1)
		{
			r = specifiers_nb(format + i, var);
			cp += r < 0 ? write(1, &c, 1)
			  + (format[i] == c ? 0 : write(1, format + i, 1)) : r;
			condition = 0;
		}
		else
			cp += write(1, format + i, 1);
		i++;
	}
	va_end(var);
	return (format == NULL ? -1 : cp);
}
