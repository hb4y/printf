#include "holberton.h"
/**
 * valid_args - check for valid args.
 * Description: check that % had a valid valid arg
 * @format: the char * to check
 * @valist: argument list
 * Return: void
 **/
int valid_args(const char **format, va_list valist)
{
	int i, printed;

	op_t ops[] = {
		{"c", p_char},
		{"s", p_string},
		{"i", p_int},
		{"d", p_d_int},
		{NULL, NULL}
	};
	printed = 0;

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
			break;
		}
	}

	if (*(ops[i].f) == NULL)
	{
		_putchar('%');
		_putchar(*format[0]);
		printed += 2;
	}
	return (printed);
}
