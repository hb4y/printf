#include "holberton.h"
/**
 * valid_args - check for valid args.
 * Description: check that % had a valid valid arg
 * @flag: the char * to check
 * Return: void
 **/
void valid_args(char * format)
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
