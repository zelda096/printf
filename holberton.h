#ifndef _HOLBERTON_
#define _HOLBERTON_

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);

typedef struct type
{
  char type;
  int (*f)(va_list args);
} type_t;

int (*getTypes(char type))(va_list args);

#endif
