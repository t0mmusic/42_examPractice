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
        {"a.out", "100", NULL},
        {"a.out", "-100", NULL},
        {"a.out", "2147483647", NULL},
        {"a.out", "-2147483648", NULL},
        {"a.out", "2147483648", NULL},
        {"a.out", "-2147483649", NULL},
        {"a.out", " 	42 	", NULL},
        {"a.out", " 4 2", NULL},
        {"a.out", "+-42", NULL},
        {"a.out", "4A2", NULL},
		{"a.out", "--42", NULL},
		{"a.out", "q42", NULL},
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
