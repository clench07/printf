#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints char , int etc 
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int count  = 0, i;
	if (format[0] == '%' && format[i] == '\0')
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] = '%')
		{
		

