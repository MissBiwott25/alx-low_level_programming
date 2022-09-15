#include <stdio.h>
/**
 * main - prints the fibonacci
 * Return: 0 Always
 */
int main(void)
{
	int i, j, sum;
	int a;

	i = 1;
	j = 2;
	sum = 0;
	while (j < 4000000)
	{
	if (j % 2 == 0)
	{
	sum += j;
	}
	a = j;
	j += i;
	i = a;
	}
	printf("%d\n", sum);
	return (0);
}
