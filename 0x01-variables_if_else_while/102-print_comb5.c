#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print out the stdout
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 01; n < 100; n++)
	{
	putchar(n);
	if (n != 100)
	{
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
