i#include "main.h"

/**
  * more_numbers - Print 10 times numbers from 0 to 14
  *
  * Return: print 10 times numbers from 0 to 14
  */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar(y + '0');
		}

		_putchar('\n');
	}
}
