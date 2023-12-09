#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	while (1)
	{
		char LINE[MAX_LENGTH];
		display_prompt();
		if (fgets(LINE, MAX_LENGTH, stdin) == NULL) 
		{
			printf("\n");
			break;
		}
	}
	return (0);
}
