#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct format_specifier - struct to map specifiers to functions.
 * @specifier: format specifier character.
 * @print_func: pointer to the function that handles printing for specifier.
 * Despcription: associate format specifiers with corresponding print function.
 */

typedef struct format_type
{
	char *specifier;
	int (*func)(va_list args);
} format_t;

int _printf(const char *format, ...);

int _printf_char(va_list args);

int _printf_string(va_list args);

int _putchar(char c);

int _printf_percentage(va_list args);

int (*get_format_function(char check))(va_list);

#endif /* MAIN_H */
