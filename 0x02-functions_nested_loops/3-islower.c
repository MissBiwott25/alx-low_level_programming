#include "main.h"
/**
 * _islower - funtion check the statement
 *Return: 1 if correct and 0 if not
 *@c: is int inwhich the arg is passed
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
