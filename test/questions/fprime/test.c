#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[30][30] =
    {
        {"a.out", "1", "2", "3", "4", "5", "6", NULL},
        {"a.out", "150", NULL},
        {"a.out", "183", NULL},
        {"a.out", "103", NULL},
        {"a.out", "109", NULL},
        {"a.out", "112293", NULL},
        {"a.out", "879844", NULL},
        {"a.out", "997143", NULL},
        {"a.out", "1688949", NULL},
        {"a.out", "804577", NULL},
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
