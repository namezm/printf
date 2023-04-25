#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int oktob_char(va_list var);
int oktob_integer(va_list var);
int oktob_string(va_list var);
int oktob_no_printable(va_list var);

/**
 *struct _oktob - Struct
 *@type: type 
 *@print: print 
 */
typedef struct _oktob
{
	char *type;
	int (*print)(va_list);
} oktob;

#endif
