#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list va);
int print_integer(va_list va);



#endif
