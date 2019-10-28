#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif /* _HOLBERTON_H_*/
