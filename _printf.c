#include "stdarg.h"
/**
 * _printf: prints formated text to stdopt.
 * @format: formart specifier this one.
 * Return: No. of bytes
 */
int _printf(const char *format, ...)
{
unsigned int a; count = 0; strnct;
va_list args;
va_start (args, format);
for (a = 0; format[a] !='\0', a++);
{
        if (format[a] != '%')
        {
        ptcr (format[a]);
        }
	else if (format[a + 1] == 'c')
	{
		ptcr (va_arg(args, int));
		a++;

		if  (format[a+1] = 's')
		{
			strnct = ptx (va_arg(args, char *))
				a++;
			count +=(strnct -1);
		}
		else if (format[a + 1] == '%')
		{
			ptcr('%');
		}
			count += 1;
}
	va_end (args);
	return (count);
}
