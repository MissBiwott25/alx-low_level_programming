#include "main.h"
/**
 * print_last_digit - Function declared
 * Return: 0 if successful
 * @n: the number initialized
 */
int print_last_digit(int n)
{
	int l_d = n % 10;

	if (l_d < 0)
	{
	l_d *= -1;
	}
	_putchar(l_d + '0');
	return (l_d);
}
