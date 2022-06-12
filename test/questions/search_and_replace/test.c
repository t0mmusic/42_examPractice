#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[10][10] =
    {
        {"a.out", "Papache est un sabre", "a", "o", NULL},
        {"a.out", "zaz", "art", "zul", NULL},
        {"a.out", "zaz", "r", "u", NULL},
        {"a.out", "jacob", "a", "b", "c", "e", NULL},
        {"a.out", "ZoZ eT Dovid oiME le METol.", "o", "a", NULL},
        {"a.out", "wNcOre Un ExEmPle Pas Facilw a Ecrirw ", "w", "e", NULL},
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
