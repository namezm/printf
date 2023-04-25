#include "main.h"

/**
 * oktob_string - verification
 * by namezm & bouilla
 * @va: variadic
 * Return: string
 */
int oktob_string(va_list var)
{
	char *str;
	int cp = 0;

	str = va_arg(var, char*);
	if ((unsigned long)var <= (unsigned long)str)
		return (-1);
	str = str == NULL ? "(null)" : str;
	while (*(str + cp) != '\0')
		cp++;
	return (write(1, str, cp));
}
