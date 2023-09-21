#include "main.h"
/**
 *_printf - produces output according to a format.
 *@format: character string.
 *Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int charcount = 0, strlen = 0;
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
				write(1, &printable_char, 1);
				charcount++;
			}

			else if (*format == 's')
			{
				str = va_arg(list, char *);

				while (str[strlen] != '\0')
					strlen++;

				write(1, str, strlen);
				charcount++;

			}

			else if (*format == '%')
			{
				write(1, format, 1);
				charcount += strlen;
			}
		}
		format++;
	}
	va_end(list);
	return (charcount);
}
