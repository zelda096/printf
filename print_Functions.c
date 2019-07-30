#include "holberton.h"

/**
 * printChar - 
 * @args: %c argument
 * Return: 1
 */
int printChar(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * printStr - Print a character
 * @args: %s argument
 * Return: length of string
 */
int printStr(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		str = "(null)";
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
