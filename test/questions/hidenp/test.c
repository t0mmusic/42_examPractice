#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[30][30] =
    {
        {"a.out", "fgex.;", "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6", NULL},
        {"a.out", "abc", "2altrb53c.sse", NULL},
        {"a.out", "abc", "btarc", NULL},
        {"a.out", "salut", "a", "tous", "tout", "le", "monde", NULL},
        {"a.out", "salut a tous tout le monde", NULL},
        {"a.out", "qNsz", "RAuZ2Fi", NULL},
        {"a.out", "LI0Q", "2Rts", NULL},
        {"a.out", "G5X", "bGr58XL", NULL},
        {"a.out", "Q0EdUk", "2VCW9f1ln5", NULL},
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
