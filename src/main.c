#include "headers/ezbsh.c"

int main()
{
    char **command;
    char *input;
    pid_t child_pid;
    int stat_loc;

    printf("This shell has no command to exit yet :P\n");
    while (1) {
        input = readline("ezbsh> ");
        command = get_input(input);

        /* Handling empty command */
        if (!command[0]) {
            free(input);
            free(command);
            continue;
        }

        if (strcmp(command[0], "cd") == 0) {
            if (cd(command[1]) < 0) {
                perror(command[1]);
            }

            /* Skip the fork */
            continue;
        }

        child_pid = fork();
        if (child_pid < 0) {
            perror("Fork failed");
            exit(1);
        }

        if (child_pid == 0) {
            if (execvp(command[0], command) < 0) {
                perror(command[0]);
                exit(1);
            }
        } else {
            waitpid(child_pid, &stat_loc, WUNTRACED);
        }
        free(input);
        free(command);
    }
    return 0;
}
