#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[30][30] =
    {
        {"a.out", "21", "2313", "12", NULL},
        {"a.out", "2147483647", "10", NULL},
        {"a.out", "-2147483648", "10", NULL},
        {"a.out", "0", "2", NULL},
        {"a.out", "--223", "10", NULL},
		{"a.out", "11011121010102220021", "3", NULL},
		{"a.out", "1279757171", "10", NULL},
		{"a.out", "603f58f0", "16", NULL},
		{"a.out", "-3562018A", "12", NULL},
		{"a.out", "1133013100030030", "4", NULL},
		{"a.out", "11110111100101111010101010001", "2", NULL},
		{"a.out", "163704289", "13", NULL},
		{"a.out", "2014334000", "6", NULL},
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
