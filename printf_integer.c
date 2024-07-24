#include "main.h"

/**
 * _printf_integer - For print number integer
 * @args: it is argument
 * Return: count
 */
int _printf_integer(va_list args)
{
	long int num = va_arg(args, long int);

	/* this is the entire extract from the variadic argument list */

	int count = 0; /* count: it is counter the number print */
	long int temp; /*it is a variable temp for stock the num */
	char buffer[50]; /* it is array containing the digits of the integer */
	int index = 0;

	if (num < 0) /* For manage the negative number */
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
	temp = num; /*Extract the digits and the buffer in reverse order */
	while (num > 0)
	{
		buffer[index++] = (temp % 10) + '0';
		temp /= 10;
	}

	for (--index; index >= 0; index--) /* For print the number in good order */
	{
		_putchar(buffer[index]);
		count++;
	}
	return (count);
}
