#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[30][30] =
    {
        {"a.out", NULL},
        {"a.out", "21", "2313", NULL},
        {"a.out", "2147483647", NULL},
        {"a.out", "0", NULL},
        {"a.out", "577027294", NULL},
        {"a.out", "1812423854", NULL},
        {"a.out", "1972840764", NULL},
        {"a.out", "636903537", NULL},
        {"a.out", "260073722", NULL},
        {"a.out", "690960617", NULL},
        {"a.out", "1195048816", NULL},
        {"a.out", "176206290", NULL},
        {"a.out", "41856660", NULL},
        {"a.out", "1888545200", NULL},
        {"a.out", "1421872998", NULL},
        {"a.out", "1758500300", NULL},
        {"a.out", "1647111999", NULL},
        {"a.out", "663785511", NULL},
        {"a.out", "1717853599", NULL},
        {"a.out", "853615032", NULL},
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
