#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * form - struct data type that contains formatted token and corresponding
 * function pointer
 *
 *@token: format token
 *@funcall: function pointer
 *
 */
typedef struct format
{
	char token;
	void (*funcall)(va_list);
} form;

/*Prints a character*/
int _putchar(char c);

/*Prints all*/
int _printf(const char *format, ...);

#endif
