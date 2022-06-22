#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[10][10] =
    {
        {"a.out", "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification.", NULL},
        {"a.out", "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  ", NULL},
        {"a.out", "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot", NULL},
        {"a.out", "LlzgTXA8yV3	916vbsy2Cr0DzFQW8	aFm9bsqEPpvoZyN	C2QJfdzT09WAm	6Yu	psk5Gurg0ND	Pwb1RHt7mZKJ	ZP9g3r0adUmwYnhyN	GAWv0qKrL	6wQ	YTZ3OL2	qcAgpdkSvz	O17dsvc	kIutVD3Nl1wHBTA	jw4	EqwDa7g6ot1cQeU9", NULL},
        {"a.out", "vJj1ik7	DjO	fm6Xt5nSlHhp	ysSd38j6KU7MGQg	SLKqwAHjrnBaP3Xf	0QO	ADTEKQdwYc	R9sad53kb4fPCW	l2wKI5VRhTDugtYPH	1hmzYJcFlq	Tb4V	qNj1TRgvwP94	43B", NULL},
        {"a.out", "vBestQdbf", NULL},
        {"a.out", "salut", "a", "tous", "tout", "le", "monde", NULL},
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
