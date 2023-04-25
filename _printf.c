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
	va_start(args,format);

	int i = 0;
