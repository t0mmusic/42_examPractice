#include <stdlib.h>

char    **tests(int i)
{
    char    **ret;
    char    *test_list[6][4] = 
    {
        {"a.out", "FOR PONY", NULL},
        {"a.out", "this        ...       is sparta, then again, maybe    not", NULL},
        {"a.out", "   ", NULL},
        {"a.out", "a", "b", NULL},
        {"a.out", "  lorem,ipsum  ", NULL},
        {NULL},
    };
    ret = malloc(sizeof(test_list[i]));
    ret = test_list[i];
    return (ret);
}