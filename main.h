#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_str(char *str, char c, unsigned int indexstr);
int print_str(char *str, unsigned int nbrstr);

#endif
