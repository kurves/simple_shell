#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#define MAX_LENGTH 1024


void display_prompt(void);
void interactive_mode(void);
void process_input(char *args[]);
void non_interactive_mode(int argc, char *argv[]);
void print_error(char *message);
#endif
