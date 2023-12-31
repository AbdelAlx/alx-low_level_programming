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
	int num1, num2;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		exit(0);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	printf("%d\n", num1 * num2);

	return (0);
}
