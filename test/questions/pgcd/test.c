#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[30][30] =
    {
        {"a.out", "42", "10", NULL},
        {"a.out", "920556", "1980488", NULL},
        {"a.out", "110360", "116932", NULL},
        {"a.out", "9001392", "2568344", NULL},
        {"a.out", "4696941", "4664522", NULL},
        {"a.out", "2184164", "5139728", NULL},
        {"a.out", "15", "18", NULL},
        {"a.out", "1", "17", NULL},
        {"a.out", "17", "33", NULL},
        {"a.out", "42", "4324232", NULL},
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
