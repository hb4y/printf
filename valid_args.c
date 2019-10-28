#include "holberton.h"
/**
 * valid_args - check for valid args.
 * Description: check that % had a valid valid arg
 * @flag: the char * to check
 * Return: void
 **/
int valid_args(char **format, va_list valist)
{
	int i, printed;

	printed = 0;
	op_t ops[] = {
		{"c", p_char},
		{"s", p_string},/*
		{"i", p_int},
		{"d", p_d_int},*/
		{NULL, NULL}
	};

	for (i = 0; *(ops[i].f) != NULL; i++)
	{
		if (*format[0] == '%')
		{
			_putchar('%');
			printed++;
			break;
		}
		else if (*format[0] == *(ops[i].op))
		{
			printed += ops[i].f(valist);
		}
	}
	return (printed);
}
