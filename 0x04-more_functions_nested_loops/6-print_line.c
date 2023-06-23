#include "main.h"

/**
  * print_line -  line according to parameter
  * @n: lenght of the line
  *
  * Return: N.A
  */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}

