#include "holberton.h"
/**
 * print_number - int to char
 * @n: int to print
 * Return: number of digits printed (and -)
 */
int print_number(int n)
{
	int m, tmp, count;

	count = 0;
	m = 1;
	tmp = n;
	if (n < 0)
	{
		_putchar('-');
		count++;
	}
	while (tmp / 10 != 0)
	{
		m = m * 10;
		tmp = tmp / 10;
	}
	while ((n / m != 0) && (m != 1))
	{
		_putchar(abs((n / m)) + 48);
		count++;
		n = n % m;
		if (m > 1)
			m = m / 10;
		while ((abs(n) < m) && (m > 1))
		{
			_putchar('0');
			count++;
			m = m / 10;
		}
	}
	_putchar(abs(n) + 48);
	return (count + 1);
}

/**
 * p_int - print the int.
 * Description: handle printing integer
 * @valist: valist that have the argument to print
 * Return: len of digits
 **/
int p_int(va_list valist)
{
	int tmp, printed;

	tmp = va_arg(valist, int);

	printed = print_number(tmp);
	return (printed);
}
/**
 * p_d_int - print decimal integer.
 * Description: future handle printing octal or hexal
 * @valist: valist that have the argument to print
 * Return: len of digits
 **/
int p_d_int(va_list valist)
{
	int tmp, printed;

	tmp = va_arg(valist, int);

	printed = print_number(tmp);

	return (printed);
}
