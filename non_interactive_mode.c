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
	int i ;
	char *args[2];

	for (i = 1; i < argc; i++)
	{
		args[0] = argv[i];
		args[1] = NULL;
		process_input(args);
	}

}
