#include "holberton.h"
/**
 * func_chars - print the chars .
 * Description: handle printing char(s)
 * @valist: valist that have the argument to print
 * Return: void (just prints)
 **/
void p_char(va_list valist)
{
	_putchar(va_arg(valist, int));
}
