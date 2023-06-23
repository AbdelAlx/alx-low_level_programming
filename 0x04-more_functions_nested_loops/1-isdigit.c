#include "stdio.h"

/**
 * _isdigit - checks the input is a digit
 * @c: integer c input
 * Return: 1 if true or 2 if false
 */
int _isdigit(int c)
{
	return (c >= 48 && c < 58);
}
