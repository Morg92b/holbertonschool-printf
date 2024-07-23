#include "main.h"

/**
 * _printf - Create 'function printf with struct and variadic functions'
 * @format: list of types of arguments passed to the function
 * Return: count for counter a character print
 */
int _printf(const char *format, ...)
{
	va_list args;
	int index = 0, count = 0;
	int (*func)(va_list args);

	if (!format)
	{
		return (-1);
	}
	va_start(args, format);
	while (format && format[index])
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
			{
				va_end(args);
				return (-1);
			}
			func = get_format_function(format[index]);
			if (func)
			{
				count += func(args);
			}
			else
			{
				_putchar('%');
				_putchar(format[index]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[index]);
			count++;
		}
		index++;
	}
	va_end(args);
	return (count);
}
/**
 * get_format_function - function to return the function format
 * @check: character to check
 * Return: function or null
 */
int (*get_format_function(char check))(va_list)
{
	int index_2;
	format_t ftypes[] = {
		{"c", _printf_char},
		{"s", _printf_string},
		{"%", _printf_percentage},
		{'\0', NULL},
	};
	for (index_2 = 0; ftypes[index_2].specifier != NULL; index_2++)
	{
		if (ftypes[index_2].specifier[0] == check)
		{
			return (ftypes[index_2].func);
		}
	}
	return (NULL);
}
