#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[10][10] =
    {
        {"a.out", "chat", "chien", NULL},
        {"a.out", "ABCDEFG019874", "ABCD", NULL},
        {"a.out", ";fjhbsdnc xwpusgrhbs", "opsiyhgvdzbnciox", NULL},
        {"a.out", "0987654321", "1234567890", NULL},
        {"a.out", "/bin/ls/", "/bien/ls/~", NULL},
        {NULL},
    };
    ret = malloc(sizeof(test_list[i]));
    j = 0;
    while (test_list[i][j])
    {
        ret[j] = malloc(sizeof(test_list[i][j]));
        j++;
    }
	ret = test_list[i];
    return (ret);
}
