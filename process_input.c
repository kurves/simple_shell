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

void process_input(char *args[])
{

        char input[MAX_LENGTH];
	pid_t pid;
        int status;
	pid = fork();

        if (strcmp(input, "exit") == 0 || strcmp(input, "quit") == 0)
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
		if (execvp(args[0], args) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(pid, &status, 0);
	}
}

/**
 * print_error - function to prcess input
 * @message: error message
 * Description: function that  processes user input
 * Return: nothing
 */
void print_error(char *message)
{
	perror(message);
}
