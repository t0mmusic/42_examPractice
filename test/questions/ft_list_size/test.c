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
        {"a.out", "8PDQXBgm2", NULL},
        {"a.out", "FoLBJw0n9E1MbAWp", NULL},
        {"a.out", "onEK kemRhGO76gS4 rUjbmP0yAG6o9V YE1lcGVXAWhL3 1XDheS0bU nmdZsy3wXOh8I LovSM nXvDyRA4 8DJfPGXt FQKHw0 wZ37 sbPxczNSEhv7 zBFeg GsgP1DKSbvlToO9rp 1s7qNR3BzfmulLp6O mthCN", NULL},
        {"a.out", "4HmQExpyngKqWv 1eT ldGh pwDf53QFCK6lU v7UjR SZEVF76y 54xoDWAjeFm", NULL},
        {"a.out", "ba9LqzUj", "Fbvg0n", "e1TDr2BQn7g", "01k8Np6y", "lRLc52vs7WM", "w6JDGI8oWOk5Y", "Mz1byTSvoDx9aK3", "q5DNfea7pOz", "iLcn3RK", "lMNvV9TXhYWQIza", "AU9c2", "xl6mHZ0VgdfrukM", "b1psVveif8t", "IdOnc4uQJtpxBm", "Y79oh", NULL},
        {"a.out", "qT42APua0R8GjY6d", "DPexBSOp", "kK451DhURJY", "ufdivCNlY", "qxXu1eYpicPT5h", NULL},
        {"a.out", "z3rTnIay0m", "nDiTQ9p3tZX", "MtL9XKFv", "Qlg2WMvdBm", NULL},
        {"a.out", "dV9mp7M2OyfHZx A0o 1RUni4pekcNx7Do RSl3KEyAfXNU57m6r 1Cnt5qFRm4OIoK 0ZpBY7DEkCcgmqO98 YjfQ", "kFNhJPqGKd1fgpo 3z8sTBPA Xj5eW WRTtPAiYfDN1b 0O3ECDMQYbisf sAZSXOyF90 3cAwfMtYWF46NJH7 aKkzt0qWRJXbe Ub9 Zf6syL IgLXla2q lYkH2ipKFZgTP ejRPCzA18qXumBOnx Dau8Hm AfJ6R5pjIQLEZxueH cuI1Svnjrm f9VTUN XUeHVF5y", NULL},
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
