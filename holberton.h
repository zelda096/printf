#ifndef _HOLBERTON_
#define _HOLBERTON_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct type - struct for all printf / protoypes
 * @type: s, c, i, d, etc.
 * @f: pointer to function
 */

typedef struct type
{
	char type;
	int (*f)(va_list args);
} type_t;

int _putchar(char c);

int (*getTypes(char type))(va_list args);

#endif
