#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints stdout;
 * Return: 0 if successful
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 12; a < 50; a++)
	{
	for (b = a + 1; b < 51; b++)
	{
	for (c = b + 1; c < 52; c++)
	{
	putchar(a);
	putchar(b);
	putchar(c);
	if (a != 50 || b != 51 || c != 52)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
