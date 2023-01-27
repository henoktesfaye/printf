#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*checker(const char*))(va_list);

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int prip(va_list);
int prich(va_list);
int prid(va_list);
int prii(va_list);
int pris(va_list);

#endif
