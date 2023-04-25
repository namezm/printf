#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int print_char(va_list);
int print_string(va_list);
int print_integer(va_list);
int _printf(const char *, ...);
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
