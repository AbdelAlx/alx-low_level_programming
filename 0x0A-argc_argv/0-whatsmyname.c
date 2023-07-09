#include "main.h"
#include <stdio.h>

/**
 * main - return the name of the program
 * @argc: arguments number
 * @argv: arguments Vector
 *
 * return: always return 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s \n", *argv);
	return (0);
}
