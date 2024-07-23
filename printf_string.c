#include "main.h"

/**
 * _printf_string - Prints 'string of char'
 * @args: character of the arguments
 * Return: _print_string of count
 */

int _printf_string(va_list args)
{
	int count = 0; /* Initializes a counter */
	char *str = va_arg(args, char *);
	/* Retrieves the next argument from the args list */

	if (str == NULL)
		str = ("(null)"); /* to avoid undefined behavior, if NULL */

	while (str[count])
	{
		_putchar(str[count++]); /* putchar the string */
	}
	return (count);
}
