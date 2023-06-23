#include "main.h"

/**
  * print_diagonal -  diagonal lines according parameter
  * @n: diagonal lines occurence
  *
  * Return: N.A
  */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
