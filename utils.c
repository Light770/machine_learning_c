int     ft_strlen(*str)
{   
    int     i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}