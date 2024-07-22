#include "main.h"

/**
 *_printf_char - function that print one character
 *@args: the argument list containing the character to print
 *Return: the number of characters printed (always 1)
 */

int _printf_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
