#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[10][10] =
    {
        {"a.out", "FOR", "PONY", NULL},
        {"a.out", "this        ...       is sparta, then again, maybe    not", NULL},
        {"a.out", "=tw7GOaW4XgQPMbiLn	02xDfQ8CWmE 		 5sUYk8BPTR40VQ 82a0dGwhNEbqOPk?CAkM2Zdijm12c9QJWOz7ms1uxo8-c5XrFRp7-doU4jQ(DkYFO7gLBhGPCj	 ,aR2hpOClkD81Sw.", NULL},
        {"a.out", "9nd2YrBU IFkVzxb3w0t	 APuvYU7	zLRWdVSw2OeGp?Zwn5dEJ-4RjKuw		9hLa4lZDt/NjYBtF.dZ657DY3KVO;", NULL},
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
