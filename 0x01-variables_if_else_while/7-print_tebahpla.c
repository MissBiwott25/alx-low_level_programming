#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print stdout
 * Return: 0 if successful
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
	putchar(low);
	}
	putchar('\n');
	return (0);
}
