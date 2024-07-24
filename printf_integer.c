#include "main.h"

/**
 * _printf_integer - Print 'number integer'
 * @args: that's the argument
 * Return: count
 */
int _printf_integer(va_list args)
{
	int num = va_arg(args, int);
	/* this is the entire extract from the variadic argument list */
	int count = 0; /* count: it is counter the number print */

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num == 0) /* For manage the zero number */
	{
		_putchar('0');
		return (count + 1);
	}
	print_recursion(num, &count);
	return (count);
}
/**
 * recursive - Print 'recursive number'
 *@num: integer the number whose digits will be displayed
 @count: count the number of digits displayed
 */

void print_recursion(int num, int *count)
{
    if (num / 10 != 0)
    {
        print_recursion(num / 10, count);
    }
    _putchar((num % 10) + '0');
    (*count)++;
}
