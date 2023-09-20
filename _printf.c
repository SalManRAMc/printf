#include "main.h"

/**
 *
 * _printf - produces output according to format
 *
 *@format: character string, composed of zero more directives
 *@...: indefinite no. of args for vars etc.
 *
 */

int _printf(const char *format, ...)
{
	form f[] = {
		{'c', printchar},
		{'s', printstring},
		{'d', printint},
		{'i', printint},
		{'\0',NULL}
	};
	va_list params;
	int (*summonprint)(va_list);
	int i = 0, j = 0;
	int argnumber = 0, flag = 0;


	va_start(params, format);


	while (format[i] != '\0')
	{

		while (f[j].token != '\0' && format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
			}

			if (f[j].token == format[i + 1])
			{
				flag = 1;
				argnumber += 1;

				summonprint = f[j].funcall;
				summonprint(params);
			}
			j++;

			if (flag == 1)
			{
				i++;
			}
			flag = 0;
		}

		j = 0;
		if (format[i - 1] == '%')
		{
			i++;
			continue;
		}
		_putchar(format[i]);
		i++;
	}

	va_end(params);
	_putchar('\n');
	_putchar(BUF_FLUSH);

	return (argnumber);
}
