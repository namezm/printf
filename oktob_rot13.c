#include "main.h"
/**
 * rot13_recu - verification
 * by namez & bouilla
 * @s: string
 * Return: string
 */
int rot13_recu(char *str)
{
	int j;
	char *outputs = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *inputs = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	if (*str == '\0' || str == NULL)
		return (0);
	for (j = 0; inputs[j] != '\0'; j++)
	{
		if (*str == inputs[j])
			return (write(1, outputs + j, 1) + rot13_recu(str + 1));
	}
	return (write(1, str, 1) + rot13_recu(str + 1));
}
/**
 * oktob_rot13 - verification
 * by namez & bouilla
 * @var: variadic
 * Return: string length
 */
int oktob_rot13(va_list var)
{
	return (rot13_recu(va_arg(var, char *)));
}
