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
	else if (argc == 2)
	{
		FILE *file = fopen(argv[1], "r");

		if (file == NULL)
		{
			perror("Error opening file");
			exit(EXIT_FAILURE);
		}
		non_interactive_mode(file);
		fclose(file);
	}
	else
	{
		fprintf(stderr, "Usage: %s [file]\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
