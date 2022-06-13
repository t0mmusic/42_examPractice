#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[30][30] =
    {
        {"a.out", "See? It's easy to print the same thing", NULL},
        {"a.out", " this        time it      will     be    more complex  . ", NULL},
        {"a.out", "No S*** Sherlock..." "nAw S*** ShErLaWQ...", NULL},
        {"a.out", "salut", "a", "tous", "tout", "le", "monde", NULL},
        {"a.out", "emySkGr0W3A", NULL},
        {"a.out", "lCOIt SKf7BpT24kt yJvo8 DBh0E9kgoXew oaXx5ueQf3gNir oJ25vnuxGAXC1g HsEyK8a5N9Y 4goI2lK9Dj8XLBYe bZVKQSTA qVDSEi7 uMAtjQOh Xpe0oPu3", NULL},
        {"a.out", "	 	1INcZ5CsQARM6 	92g	 	HNAZSDl4gPsE6  OuQBwvRrTiZVJxXWq  	wlGf 	", NULL},
        {"a.out", "  			vaIukLdQ5F8gcMA	kmDioj8aCzK   	 en1TYoFp  ", NULL},
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
