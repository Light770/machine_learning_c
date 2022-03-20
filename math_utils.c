#include <stdlib.h>

int     ft_strlen(int *str);

int     **ft_dot_product(int **mat_A, int **mat_B)
{
    int k;
    int j;
    int i;
    int k_max;
    int j_max;
    int i_max;
    int **out = malloc(sizeof(int*) * k_max);

    k = 0;
    j = 0;
    i = 0;
    k_max = ft_strlen(mat_B[0]);
    j_max = ft_strlen(mat_A[0]);
    i_max = ft_strlen(mat_A);

    while (j < j_max)
    {
        out[j] = malloc(sizeof(int) * j_max);
        j++;
    }
    j = 0;

    if (i_max == k_max)
        while (k < k_max)
        {
            while (j < j_max)
            {
                while (i < i_max)
                {
                    out[k][j] = out[k][j] + mat_A[i][j] * mat_B[k][i];
                    i++;
                }
                j++;
            }
            k++;
        }
        return (out);
}

int     ft_dot_product_row()
{

}

int     ft_vector_dot_product(int vector_A[], int vector_B[], int n)
{
    int     product;
    int     i;

    i = 0;
    product = 0;
    while (i < n)
    {
        product = product + vector_A[i] * vector_B[i];
        i++;
    }
    return (product);
}