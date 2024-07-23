#include "main.h"

/**
 * _printf_string - Prints 'string of char'
 * @args: character of the arguments
 * Return: _print_string of count
 */

int _printf_string(va_list args)
{
	int count = 0; /* Initializes a counter */
	char *str = va_arg(args, char*);
	/* Retrieves the next argument from the args list */

	if (str == NULL)
		str = ("NULL"); /* to avoid undefined behavior, if NULL */

	while (*str != 0)
	{
		_putchar(*str); /* putchar the string */
		str++; /* increments the str pointer */
		count++; /* increments  the count of counter */
	}
	return (count);
}
