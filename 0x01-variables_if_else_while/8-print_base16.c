#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints out the stdout
 * Return: 0 if successful
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
