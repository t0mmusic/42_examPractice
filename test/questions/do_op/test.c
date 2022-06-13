#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[30][30] =
    {
        {"a.out", "3", "*", "4", NULL},
        {"a.out",  "3", "+", "4", NULL},
        {"a.out",  "3", "/", "4", NULL},
        {"a.out",  "3", "-", "4", NULL},
        {"a.out",  "3", "%", "4", NULL},
        {"a.out",  "-3", "/", "4", NULL},
        {"a.out",  "3", "/", "-4", NULL},
        {"a.out",  "4", "/", "4", NULL},
        {"a.out",  "0", "+", "0", NULL},
        {"a.out", "", NULL},
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
