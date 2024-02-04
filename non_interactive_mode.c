#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "main.h"
/**
 * non_interactive_mode - function to handle non interactive mode
 * @file: file input
 * Description: function that  handles non interactive shell commands
 * Return: nothing
 */

void non_interactive_mode(int argc, char *argv[])
{
	char input[MAX_LENGTH];
	
	for (int i = 1; i < argc; i++)
	{
		process_input(argv[i]);
	}

}
