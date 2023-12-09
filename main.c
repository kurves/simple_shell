#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main - check the code
 * @argc:  number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		interactive_mode();
	}
	else
	{
		fprintf(stderr, "Usage: %s [file]\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	return (0);
}
