#include "main.h"
/**
 *_printf - produces output according to a format.
 *@format: character string.
 *Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int argcount = 0, strlen = 0;
	char printable_char, *str;
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
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			else if (*format == 'c')
			{
				printable_char = va_arg(list, int);
				write(1, &c, 1);
				argcount++;
			}

			else if (*format == 's')
			{
				str = va_arg(list, char *);

				while (str[strlen] != '\0')
					strlen++;

				write(1, str, strlen);
				argcount++;

			}

			else if (*format == '%')
			{
				write(1, format, 1);
				argcount++;
			}
		}
		format++;
	}
	va_end(list);
	return (argcount);
}
