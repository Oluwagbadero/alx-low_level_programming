#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 * Return: 1 if is an uppercase character, 0 in other case. 
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
