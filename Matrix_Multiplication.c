//Matrix Multiplication of user-defined rows & columns of two matrices.
#include <stdio.h>
void matrix_multiplication(int row1, int col1, int row2, int col2)
{
    int array1[row1][col1], array2[row2][col2], result[row1][col2];
    int i, j, k;
    printf("Enter 1st Matrix elements:-\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("Array_1[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Enter 2nd Matrix elements:-\n");
    for (j = 0; j < row2; j++)
    {
        for (k = 0; k < col2; k++)
        {
            printf("Array_2[%d][%d]: ", j + 1, k + 1);
            scanf("%d", &array2[j][k]);
        }
    }
    //Preparation of Resultant Matrix
    for (i = 0; i < row1; i++)
    {
        for (k = 0; k < col2; k++)
        {
            result[i][k] = 0;
            for (j = 0; j < col1; j++)
            {

                result[i][k] += array1[i][j] * array2[j][k];
            }
        }
    }
    printf("Resultant Matrix:-\n");
    for (i = 0; i < row1; i++)
    {
        for (k = 0; k < col2; k++)
        {
            printf("%d\t", result[i][k]);
        }
        printf("\n");
    }
}
int main()
{
    int row1, row2, col1, col2;
    printf("Enter the rows of 1st Matrix: ");
    scanf("%d", &row1);
    printf("Enter the columns of 1st Matrix: ");
    scanf("%d", &col1);
    printf("Enter the rows of 2nd Matrix: ");
    scanf("%d", &row2);
    printf("Enter the columns of 2nd Matrix: ");
    scanf("%d", &col2);
    if (col1 != row2)
    {
        printf("This operation of Matrix Multiplication is not possible.\n");
    }
    else
    {
        printf("This operation will be Successful.\n");
        matrix_multiplication(row1, col1, row2, col2);
    }
    return 0;
}