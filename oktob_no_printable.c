#include "main.h"

/**
 * oktob_no_printable - no printable string
 * by namezm & bouilla
 * @var:  arguments
 * Return: number of characters printed
 */
int oktob_no_printable(va_list var)
{
	int i, cp = 0;
	char *str = va_arg(var, char *), sefer = '0';
	unsigned int i;

	if (!str)
		return (0);
	for (i = 0; str[i]; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			cp += write(1, "\\x", 2);
			i = (unsigned int)str[i];
			if (i < 16)
				cp += write(1, &sefer, 1);
			cp += number_caster(i, 16, 1);
		}
		else
			cp += write(1, str + i, 1);
	}
	return (cp);
}
