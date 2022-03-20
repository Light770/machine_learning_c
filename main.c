#include <stdio.h>
#include <stdlib.h>

int     **ft_dot_product(int **mat_A, int **mat_B);
int     ft_strlen(int *str);


int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int mat_A[2][1] =   {{1}, 
                        {0}};
    int mat_B[4][1] = {1, 1, 1, 1};

    int **out = ft_dot_product(mat_A, mat_B);

    while (i < 1)
    {
        j = 0;
        while (j < 2)
        {
            printf("%d ", out[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    free(out);

    return (0);
}