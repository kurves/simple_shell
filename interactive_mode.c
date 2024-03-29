#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#define MAX_LENGTH 1024

/**
 * interactive_mode - function that handles the interactive shell
 * @void: void parameter
 * Description: function that handles the interactive shell commands
 * Return: nothing
 */
void interactive_mode()
{
	char input[MAX_LENGTH];
	char *args[2];

	while (1)
	{
		display_prompt();
		if (fgets(input, MAX_LENGTH, stdin) == NULL)
		{
			print_error("Error reading input");
			continue;
		}
		input[strcspn(input, "\n")] = '\0';
		if (strcmp(input, "exit") == 0)
		{
			break;
		}
		args[0] = input;
		args[1] = NULL;
		process_input(args);
	}
}
