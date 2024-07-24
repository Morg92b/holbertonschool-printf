#include "main.h"

/**
 * _printf_integer - For print number integer
 * @args: it is argument
 * Return: count
 */
int _printf_integer(va_list args)
{
	int num = va_arg(args, int);

	/* this is the entire extract from the variadic argument list */

	int count = 0; /* count: it is counter the number print */
	char buffer[50]; /* it is array containing the digits of the integer */
	int index = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num == 0) /* For manage the zero number */
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		buffer[index++] = (num % 10) + '0';
		num /= 10;
	}

	while (index > 0) /* For print the number in good order */
	{
		_putchar(buffer[--index]);
		count++;
	}
	return (count);
}
