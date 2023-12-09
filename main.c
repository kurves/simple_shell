#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
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
		LINE[strcspn(LINE, "\n")] = '\0';
		execute_command(LINE);
	}
	return (0);
}
