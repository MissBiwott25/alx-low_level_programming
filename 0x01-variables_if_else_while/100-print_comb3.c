#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the stdout
 * Return: 0 if successful
 */
int main(void)
{
	int a;

	for (a = 0; a < 90; a++)
	{
	putchar((a / 90) + '0');
	putchar((a % 10) + '0');
	if (a != 90)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
