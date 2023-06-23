#include "main.h"

/**
  * print_most_numbers - Print numbers from 0 to 9
  *
  * Description: Prints numbers without 2 and 4
  *
  * Return: numbers from 0 to 9
  */
void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
