#include "main.h"

/**
 * _printf_integer - it is print the number integer
 * @args: it is the number argument 
 * Return: count
 */
int _printf_integer(va_list args)
{
	int count = 0, index, j;
	int num = va_arg(args, int);
	char buffer[50];
	unsigned int n;

	if (!num)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		n = -num;
		count++;
	}

	else
		n = num;

	index = 0;
	while (n != 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	for (j = index - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}

	return (count);
}
