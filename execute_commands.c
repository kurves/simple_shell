#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * execute_commands - function to execute shell commands
 * @command: command charater
 * Description: function that executes commnads passed to it
 * Return: nothin
 */

void execute_command(char *command) 
{

	pid_t pid = fork();
	char LINE[MAX_LENGTH];

	if (strcmp(LINE, "exit") == 0 || strcmp(LINE, "quit") == 0) 
	{
		printf("Exiting simple_shell...\n");
	}
	if (pid == -1) 
	{
		perror("fork");
		exit(EXIT_FAILURE);
	} 
	else if (pid == 0)
	{
		execlp(command, command, NULL);
		perror(command);
		exit(EXIT_FAILURE);
	}
	else 
	{
		int status;
		waitpid(pid, &status, 0);
		if (WIFEXITED(status)) 
		{
		
		}
	}
}
