#include "main.h"
/**
 * _isalpha - Function declared
 * @c: is int passed out arg
 * Return: 1 if true else 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
