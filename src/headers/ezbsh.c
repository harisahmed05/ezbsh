#include "ezbsh.h"

int cd(char *path) 
{
    return chdir(path);
}

char **get_input(char *input)
{
    char **command = malloc(8 * sizeof(char *));
    
    /* Checking memory allocation failure */
    if(command == NULL) {
        perror("malloc failed");
        exit(1);
    }

    char *separator = " ";
    char *parsed;
    int index = 0;
    
    parsed = strtok(input, separator);
    while (parsed != NULL) {
        command[index] = parsed;
        index++;

        parsed = strtok(NULL, separator);
    }

    command[index] = NULL;
    return command;
}
