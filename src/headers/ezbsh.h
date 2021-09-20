#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <sys/wait.h>

char **get_input(char *input);
int cd(char *path);
