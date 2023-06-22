#include "main.h"
/**
 * _isalpha - returns 1 if c is lowercase, 0 otherwise
 *@c: integer Tbt
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
