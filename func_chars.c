#include "holberton.h"
/**
 * func_chars - print the chars .
 * Description: handle printing char(s)
 * @valist: valist that have the argument to print
 * Return: void (just prints)
 **/
void p_char(char * format)
{
	int i;

	op_t ops[] = {
		{"c", p_char}/*,
		{"s", p_string},
		{"i", p_int},
		{"d", p_d_int},*/
		{NULL, NULL}
	};

	i = 1;
	
	for (; format[i]  )
}
