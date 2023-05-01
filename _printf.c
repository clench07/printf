#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints both char and int
 * @format: pointer to string that contains the format specifier
 * Return: number of characters to be printed
 */

int _printf(const char *format, ...)
{
	int count  = 0, i = 0;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				count += _putchar('%');
				i += 2;
			}
			else
			{
				f = get_func(format[i + 1]);
				if (f)
					count += f(args);
				else
					count = _putchar('&') + _putchar(format[i + 1]);
				i += 2;
			}
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
