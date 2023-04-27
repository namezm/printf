#include "main.h"

/**
 * oktob_non_printable - no printable char
 * by namez & bouilla
 * @var: va_list args
 * Return: number of characters printed
 */
int oktob_non_printable(va_list var)
{
	int i, cp = 0;
	char *strr = va_arg(var, char *), sefer = '0';
	unsigned int xx;

	if (!strr)
		return (0);
	for (i = 0; strr[i]; i++)
	{
		if (strr[i] > 0 && (strr[i] < 32 || strr[i] >= 127))
		{
			cp += write(1, "\\x", 2);
			xx = (unsigned int)strr[i];
			if (xx < 16)
				cp += write(1, &sefer, 1);
			cp += numero_cast(xx, 16, 1);
		}
		else
			cp += write(1, strr + i, 1);
	}
	return (cp);
}
