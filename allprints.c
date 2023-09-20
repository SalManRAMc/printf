#include "main.h"

/**
 * printchar - prints a character
 *
 *@c: character to be printed
 */
int printchar(va_list c)
{
	char printed_char = va_arg(c, int);
	_putchar(printed_char);
	return (1);
}

/**
 *printstring - prints a string
 *
 *@str: string to be printed
 *
 * Return: -1 on failure, 1 on success
 */

int printstring(va_list str)
{
	char *editable_string;
	int i = 0;

	editable_string = va_arg(str, char *);
	if (editable_string == NULL)
		editable_string = "(nil)";

	while (editable_string[i] != '\0')
	{
		_putchar(editable_string[i]);
		i++;
	}
	return (1);
}

/**
 *  printint - prints an integer
 *
 * @num - number to be printed
 */

int printint(va_list num)
{
	int digit = va_arg(num, int);

	return (1);
}
