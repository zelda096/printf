#include "holberton.h"

/**
 * checkSpec - 
 * @spc: 
 * Return: -1 for %, 1 for specifier, 0 for n/a
 */
int checkChar(char _char)
{
	char lt[] = {'s', 'c'};
	int i = 0;

	if (_char == '%')
		return (-1);
	while (i < 2)
	{
		if (_char == lt[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * _printf - 
 * @format: 
 * Return: length of printed string
 */
int _printf(const char *format, ...)
{
	int i, c;
	va_list args;

	va_start(args, format);
	i = c = 0;
	if (format == NULL)
		return (-1);
	while (format[i] != '/0')
	{
		if (format[i] == '%' && format[i + 1] == '/0')
			return (-1);
		if (format[i] == '%' && checkChar(format[i + 1]) == '/0'
		{
			i++;
			if (checkChar(format[i]) == 1)
				c += (*getTypes(format[i]))(args);
			else
			{
				_putchar(format[i]);
				c++;
			}
			i++;
		}
			else
			{
				_putchar(format[i]);
				c++;
			}
	}
	va_end(args);
	return (c);
}
