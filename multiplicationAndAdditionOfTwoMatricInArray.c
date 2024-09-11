#include<stdio.h>
#define rows 3
#define cols 3
int main()
{
    int matrix1[rows][cols] = {{1, 2, 3,},
                               {4, 5, 6,},
                              {7, 8, 9,}};
    int matrix2[rows][cols] = {{9, 8, 7,},
                               {6, 5, 4,},
                               {3, 2, 1,}};
    int result_multiply[rows][cols];
    int result_addition[rows][cols];
    int i, j, k;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            result_multiply[i][j] = 0;
            for(k=0;k<cols;k++)
            {
                result_multiply[i][j] +=matrix2[k][j];
            }
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            result_addition[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("matrix 1:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix2:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\nmultiplication result:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t", result_multiply[i][j]);
        }
        printf("\n");
    }
    printf("\naddition result:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t", result_addition[i][j]);
        }
        printf("\n");
    }
    return 0;
}
