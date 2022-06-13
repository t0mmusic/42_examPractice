#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[30][30] =
    {
        {"a.out", "5", NULL},
        {"a.out", "7", NULL},
        {"a.out", "17", "23", "42", NULL},
        {"a.out", "-1941", NULL},
        {"a.out", "-1941", NULL},
        {"a.out",  "-1066", NULL},
        {"a.out", "1509", NULL},
        {"a.out", "880", NULL},
        {"a.out", "1198", NULL},
        {"a.out", NULL},
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
