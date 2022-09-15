#include "main.h"
/**
 * times_table - prints the multiplication
 * Return: 9 times table
 */
void times_table(void)
{
	int a, b, cal;

	for (a = 0; a <= 9; a++)
	{
	_putchar('0');
	for (b = 1; b <= 9; b++)
	{
	_putchar(',');
	_putchar(' ');
	cal = a * b;
	if (cal <= 9)
	_putchar(' ');
	else
	_putchar((cal / 10) + '0');
	_putchar((cal % 10) + '0');
	}
	_putchar('\n');
}
}
