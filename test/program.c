#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

char    **tests(int i);

/*  Tester for programs. Runs a number of tests for a program in
    seperate processes. */

int main(int ac, char **av)
{
    int     pid;
    int     i = 0;
    char    **argv;

    argv = tests(i);
    while (argv[0])
    {
        i++;
//		printf("%s\n", argv[1]);
        pid = fork();
        if (!pid)
        {
            execv(av[1], argv);
            exit (1);
        }
        argv = tests(i);
        usleep(50000);
    }
    waitpid(pid, 0, 0);
    return (0);
}