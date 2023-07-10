#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - char to digit function
 * @c: char to be converted to digit
 *
 * Return: digit
 */
int _atoi(char *c)
{
	int digit, i, sig;

	i = 0;
	sig = 0;
	digit = 0;

	while (c[i] != '\0')
	{
		if (c[i] == '-')
		{
		sig = 1;
		i++;
		}

		digit = digit * 10 + (c[i] - '0');
		i++;
	}
		if (sig == 1)
		digit = -digit;

		return (digit);
}

/**
 * main - 2 number multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, num, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
