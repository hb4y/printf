#include "holberton.h"
/**
 * _printf -function main entry.
 * Description: function that emulates printf.
 * @format: list of types of arguments passed to the function
 * Return: void
 **/
int _printf(const char *format, ...)
{
	int i = 0;
	va_list valist;

	va_start(valist, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
	}

	return (i);

}