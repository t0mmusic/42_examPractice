#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include "./gnl/get_next_line_bonus.h"

int main(int ac, char **av)
{
    int     fd_compare;
    char    *user;
    char    *expected;

    fd_compare = open(av[1], O_RDONLY);
    user = get_next_line(0);
    expected = get_next_line(fd_compare);
    while (expected)
    {
        if (!strcmp(user, "segmentation fault\n"))
        {
            printf("Seg Fault!\n");
        }
        else if (strcmp(user, expected))
        {
            printf("KO :(\n");
        }
        if (!strcmp(user, expected))
            printf("OK :)\n");
        free(user);
        free(expected);
        user = get_next_line(0);
        expected = get_next_line(fd_compare);
    }
    close (fd_compare);
    return (0);
}