#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#define MAX_LENGTH 100


void display_prompt(void);
void execute_command(char *command);
void interactive_mode(void);
void process_input(char *input);
void non_interactive_mode(FILE *file);
#endif
