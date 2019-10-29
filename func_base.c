#include "holberton.h"
/**
 * int_to_bin - int to binary
 * @n: unsigned int to base 2
 * Return: number of digits printed
 */
int int_to_bin(unsigned int n)
{
	int count;

	count = 0;
	if ((n / 2) != 0)
	{
		count += int_to_bin((n / 2));
		_putchar((n % 2) + 48);
	}
	else
		_putchar((n % 2) + 48);

	count++;
	return (count);
}

/**
 * p_int - print the int.
 * Description: handle printing integer
 * @valist: valist that have the argument to print
 * Return: len of digits
 */
int p_bin(va_list valist)
{
	unsigned int tmp;
	int printed;

	tmp = va_arg(valist, int);

	printed = int_to_bin(tmp);
	return (printed);
}
