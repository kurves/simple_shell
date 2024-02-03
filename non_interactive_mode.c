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

void non_interactive_mode(FILE *file)
{
	char LINE[MAX_LENGTH];
	char *args[] = { NULL };
	
	while (1)
	{
		printf("$ ");
		fflush(stdout);
		
		if (fgets(buffer, BUFFER_SIZE, stdin) == NULL)
		{
			printf("\n");
			break;
        	}
		buffer[strcspn(buffer, "\n")] = '\0';
		pid_t pid = fork();

		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			execve(buffer, args, NULL);
			perror("execve");
			exit(EXIT_FAILURE);
		}
		else
		{
			wait(NULL);
		}
		while (fgets(LINE, sizeof(LINE), file) != NULL)
		{
		
			process_input(LINE);
		}
	}
}
