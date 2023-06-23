#include "main.h"

/**
  * print_square - Print square
  * @n: square size
  *
  * Return: N.A
  */
void print_square(int n)
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
			for (y = 0; y < n; y++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
