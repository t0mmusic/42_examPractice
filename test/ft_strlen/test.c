#include <stdio.h>
int	ft_strlen(char *str);

void    test(int i)
{
    switch (i)
    {
    case 0:
        printf("%i\n", ft_strlen("Hello World!"));
        break;
    default:
        break;
    }
}