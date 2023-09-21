#include "main.h"
/**
 *_printf - produces output according to a format.
 *@format: character string.
 *Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int c = 0;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}
		format++;
	}
	va_end(list);
	return (c);
}
