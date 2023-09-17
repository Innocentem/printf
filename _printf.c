#include "stdarg.h"
/**
 * _printf: prints formated text to stdopt.
 * @format: formart specifier this one.
 * Return: No. of bytes
 */
int _printf(const char, *format, ...)
{
unsigned int a; count = 0; strnct;
va_list args;
va_start (args, format);
for (a = 0; format[a] !='\0', a++)
{
        if (format[a] != '%')
        {
        ptcr (format[a]);
        }
}
}
