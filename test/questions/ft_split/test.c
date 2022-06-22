#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[30][30] =
    {
        {"a.out", "", NULL},
        {"a.out", "	 \n\n\n	\n ", NULL},
        {"a.out", "	 	\n	\n  \n  ", NULL},
        {"a.out", " fz68kSmP	 W4usX   H7y2D0lJ3ckWfgAeu 	A7U4CSW8yBpua2Aj6sc4R 	 9Sbufv4iB	  5632kgIJEOxT  	fH7qXAwldgJn 		  ", NULL},
        {"a.out", " 	 		yTijruaz2CNS94   Y8QdUlycrUdb1ek 	67WksjdivMpbtld6N 	 BNkUsCph9J8DI	abHZ9s1SxEC2 	wnV0ANX	3CqoQRMnkZuALU3aBoiTOJmQcuGLzH	q8FWNwtdOY4moeMX 1HDuT7Q0vhFtGqUO9M1	 	FdIygDkn8auJQ54l 	 	 zXpR 		  I80ELR 	", NULL},
        {"a.out", "  	 Yvx8e 	  	qIT8zMlJga3opFBx 	 eop0 KW14Ac  	aSVXBuqirbA Uh9s4IHkvgXqtwZYlWykm3gIdcXb    RNuEL62VYzOMZ7iB 		yC0eNrmfiVg	 ", NULL},
        {"a.out", " 	l0Z1QIy vBio5   WaocvtMD6h	 	 xIV0doTN xkj 	 0O5mvVZW", NULL},
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
