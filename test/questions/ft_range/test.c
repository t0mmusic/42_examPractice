#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[10][10] =
    {
        {"a.out","2147483647", "2147483640", NULL},
        {"a.out", "0", "0", NULL},
        {"a.out", "-5", "5", NULL},
        {"a.out", "10", "3", NULL},
        {"a.out", "-3", "-5", NULL},
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
