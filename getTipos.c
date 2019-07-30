#include "holberton.h"

/**
 * getTipos - compare specifiers with types
 * @type: type
 * Return: function or null
 */
int (*getTypes(char type))
{
	type_t getFunc[] = {
		{'c', printChar},
		{'s', printStr},
		{'\0', NULL}
	};
	int i = 0;

	while (i < 3)
	{
	if (getFunc[i].type == type)
		return (getFunc[i].f);
	i++;
	}
	return (0);
}