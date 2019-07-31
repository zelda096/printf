#include "holberton.h"
/**
 * printChar - function that print a char
 * @args: argument to print
 * Return: 1
 */
int printChar(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * printStr - Print a string
 * @args: argument to print
 * Return: i
 */
int printStr(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; i < 7; i++)
			_putchar(str[i]);
		return (i);
	}
	else
		while (str[i] != '\0')
			_putchar(str[i++]);
	return (i);
}

/**
 * printDec - print number in decimal
 * @parameters: parameters to print
 * Return: size
 */
int printDec(va_list parameters)
{
	int n, c, size;
	unsigned int n2;

	n =  size = 0;
	c = 1;
	n = va_arg(parameters, int);
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	n2 = n;
	while (n2 > 9)
	{
		n2 = n2 / 10;
		c = c * 10;
	}
	while (c >= 1)
	{
		size++;
		_putchar(((n / c) % 10) + '0');
		c = c / 10;
	}
	return (size);
}
/**
 * printInt - print number in integer
 * @parameters: parameters to print
 * Return: printDec
 */
int printInt(va_list parameters)
{
	return (printDec(parameters));
}
