#include "main.h"

/**
 * _printf: prints formated string to stdopt
 * @format: format specifier
 *
 * Returns: Nmbr of bytes
 */

int _printf(const char *format, ...)
{
	int i, str_ct, count = 0;

	va_list args;
	va_start(args, format);
	
	for (i = 0; format[i] != '\0'; i++)
	{
		ptchr(format[i]);
	}
	if (format[i] == '%' && format[i + 1] == 'c')
	{
		ptchr(va_arg(args, int));
			count += 1;
	}
	if (format[i + 1] == 's')
	{
		str_ct = va_arg(args, int);
			i++;
		count = (str_ct - 1);
	}
	else if (format[i + 1] == '%')
	{
		ptchr('%');
	}
	count += 1;

	return (count);
}
