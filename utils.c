#include <stdlib.h>

int     ft_strlen(int *str)
{   
    int     i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}