#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[10][10] =
    {
        {"a.out", "127", NULL},
        {"a.out", "255", NULL},
        {"a.out", "0", NULL},
        {"a.out", "1", NULL},
        {"a.out", "42", NULL},
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
