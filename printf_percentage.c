#include "main.h"

/**
 * _printf_percentage - Print 'the character %'
 * @args: argument of va_list
 * Return: 1 if one character has been printed
 */

int _printf_percentage(__attribute__((unused))va_list args) /* ignoring the argument */
{
	_putchar('%'); /* Print the character */
	return (1);
}
