#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_FLUSH -1
#define BUF_SIZE 1024

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
	int (*funcall)(va_list);
} form;

/*writes to stdout*/
int _putchar(int c);

/**/
int printchar(va_list c);

/**/
int printstring(va_list str);

/**/
int printint(va_list num);

/*Prints all*/
int _printf(const char *format, ...);

#endif
