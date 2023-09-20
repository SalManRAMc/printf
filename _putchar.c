#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 *ON error, -1 is returned, and errno is set appropriately.
 */


/**
 * int _putchar(char c)
{
	static int i;
	static char printbuffer[BUF_SIZE];

	if (c == BUF_FLUSH || i >= BUF_SIZE)
	{
		return (write(1, printbuffer, i));
		i = 0;
	}
	if (c != BUF_FLUSH)
	{
		printbuffer[i] = c;
		i++;
	}
	return (1);
}
*/

int _putchar(int c)
{
	return (write(1, &c, 1));
}
