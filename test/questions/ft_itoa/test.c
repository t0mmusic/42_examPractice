#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[30][30] =
    {
        {"a.out", "0", NULL},
        {"a.out", "2147483647", NULL},
        {"a.out", "-2147483648", NULL},
        {"a.out", "-162", NULL},
        {"a.out", "-179", NULL},
        {"a.out", "31", NULL},
        {"a.out", "-34", NULL},
        {"a.out", "101", NULL},
        {"a.out", "-1015338", NULL},
        {"a.out", "1595479", NULL},
        {"a.out", "-1588763", NULL},
        {"a.out", "-1716615", NULL},
        {"a.out", "311826", NULL},
        {"a.out", "-1864269", NULL},
        {"a.out", "-391818", NULL},
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
