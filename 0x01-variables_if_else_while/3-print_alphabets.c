#include <stdio.h>
/**
 * main - prints out the stdout
 * Return: 0 if successful
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
	putchar(upper);
	}
	putchar('\n');
	return (0);
}
