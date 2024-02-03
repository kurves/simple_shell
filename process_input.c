#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "main.h"
/**
 * process_input - function to process input
 * @input: void parameter
 * Description: function that  processes user input
 * Return: nothing
 */

void process_input(char *input)
{
	input[strcspn(input, "\n")] = '\0';
	char *args[] = { input, NULL };
	pid_t pid;
	pid_t pid = fork();
	
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve(input, args, NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
	if (strcmp(input, "exit") == 0)
	{
		exit(EXIT_SUCCESS);
	}
	else
	{
		execute_command(input);
	}
}
