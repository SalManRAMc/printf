#include "main.h"

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
 * printchar - prints a character
 *
 *@c: character to be printed
 */

void printchar(va_list c)
{
	_putchar(va_arg(c, int));
}

/**
 *printstring - prints a string
 *
 *@str: string to be printed
 */

void printstring(va_list str)
{

}

/**
 * printpercent
 *
 *@percent: prints a percentage mark
 */

void printpercent(va_list percent)
{
	_putchar(va_arg(percent, int));
}

/**
 *  printint - prints an integer
 *
 * @num - number to be printed
 */

void printint(va_list num)
{
	int digit = va_arg(num, int);

}
