#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int         j;
    char        **ret;
    char        *test_list[10][10] =
    {
        {"a.out",  NULL},
        {NULL},
    };
    if (i > 0)
        return (NULL);
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
