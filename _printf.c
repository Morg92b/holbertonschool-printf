#include "main.h"

/**
 * _printf - Create 'function printf with struct and variadic functions'
 * @format: list of types of arguments passed to the function
 */

int _printf(const char *format, ...)
{
	format_specifier_t specifiers[] = {
		{'c', _printf_char},
		{'s', _printf_string},
		{'%', _printf_percentage},
		{0, NULL},
	};

	va_list args;
	int index = 0, j;
	int count = 0;      /* counter a character print */

	va_start(args, format);
	while (format && format[index])
	{
		if ( format[index] == '%')
		{
			index++;
			j = 0;
		while (specifiers[j].specifier)
		{
			if (format[index] == specifiers[j].specifier)
			{
				specifiers[j].print_func(args);
				break;
			}
			j++;
		}
		if (!specifiers[j].specifier)
		{
			_putchar('%');
			_putchar(format[index]);
		}
		}
		else
		{
			_putchar(format[index]);
		}
		index++;
	}
	va_end(args);
	return (count);
}
