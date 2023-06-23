#include "main.h"

/**
  * print_triangle - Prints a triangle 
  * @n: Triancle size
  *
  * Return: N.A
  */
void print_triangle(int n)
{
	int x, y, z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = n - x; y > 1; y--)
			{
				_putchar(32);
			}

			for (z = 0; z <= x; z++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
