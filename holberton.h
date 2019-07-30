#ifndef _HOLBERTON_
#define _HOLBERTON_
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

typedef struct type
{
	char type;
	int (*f)(va_list args);
} type_t;

int _putchar(char c);
int (*getTipos(char type))(va_list args);
int checkChar(char _char);
int printChar(va_list args);
int printStr(va_list args);
int _printf(const char *format, ...);

#endif
