#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * interactive_mode - function that handles the interactive shell
 * @void: void parameter
 * Description: function that handles the interactive shell commands
 * Return: nothing
 */
void interactive_mode(void)
{
	char LINE[MAX_LENGTH];

	while (1)
	{
		display_prompt();
		if (fgets(LINE, MAX_LENGTH, stdin) == NULL)
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		process_input(LINE);
	}
}
