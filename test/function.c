void    test(int i);

/*  Tester for a function. Tests a number of cases for the
    function in seperate processes. */

int main(void)
{
    int fd;
    int i;

    i = 0;
    while (i < 10)
    {
        fd = fork();
        if (!fd)
        {
            test(i);
            exit (0);
        }
        i++;
    }
}