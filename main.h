#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list var);
int print_integer(va_list var);
/**
 *struct _printer - Struct
 *@type: type
 *@print: print
 */
typedef struct _printer
{
	char *type;
	int (*print)(va_list);
} printer;

#endif
