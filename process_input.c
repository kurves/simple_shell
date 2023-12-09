#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "main.h"
/**
 * process_input - function to process input
 * @void: void parameter
 * Description: function that  processes user input
 * Return: nothing
 */

void process_input(char *input)
{
	input[strcspn(input, "\n")] = '\0';

	if (strcmp(input, "exit") == 0)
	{
		exit(EXIT_SUCCESS);
	}
	else
	{
		execute_command(input);
	}
}
