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
        {"a.out", "4PgFv", NULL},
        {"a.out", "JPA", NULL},
        {"a.out", "m6t0pzwEusqZO5PA 3ySL506Fzcih m7H 8T0cWiUJCeYxX H2Y TWQNdlm2uKb 0w6", NULL},
        {"a.out", "Qy8mJljXu 0D7VE 4Pge1KhtYQ h9BtSHy4YUXu 8J5BZCyrD PCASm", NULL},
        {"a.out", "aXPdBrwYez7D", "5aSq6MsikZKA8UF", "cEY2sZhTUaet", "EC0", "Zu0zWvh9n5mXk1E", "9H8l2", "Egc", "ejGn8g6ySP", "uaH0eon", "SLD7bs6rlh1Ao", "JA7QgGTecbvjtaBE", "rdwVlfAizNOKF", "u1nJKXAqwrYc", NULL},
        {"a.out", "nlVqKGdzg5E", "3cC", "khIjfsRSv074Z9rub", "SiYQ2GyqH3", "gA4XuqKQjyDbh", "h2bodzQqcGst", "OoYiU", "1iP7Z9erbnxTJqj", "akFMQCVu8Yh2p", "3eM", "g8UDtQVfI9wMz", "UJEVdGD9k", "p2OogXjk0mJunA", "N3Mb6Y0wW7E", "QbVo6wcTO3vFqmDys", "fauiCjde48skD3oIT", "txIi7rc5b", "nvFswe0OaX3WTom4L", NULL},
        {"a.out", "WSsLAIx8", "ZvjDdfxcGJ0Fe", "M3F", "mp4K7QaT2dj0PCUXk", "ypR2MoanD5Nr6BVI", "1R6sgeBSI7ACPt", "W4EdcV3", "p0O16z", "AI6", "IQzndxRlYG", "knHNc", "Lsy3cEDgwo", "Le9gZSP2t4EXUHJC", "AZ5mVvslSO", "mdX3lBWAq98FHC", "5ZWkyUEKMr", "a7LVc8", "7tXybiUgc", NULL},
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
