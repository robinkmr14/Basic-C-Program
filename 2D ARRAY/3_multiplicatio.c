// Write a program in C for multiplication of two square Matrices.

#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], n, i, j, k, sum;
    printf("Enter the Size of the Array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter %d and %d Eloements : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nFirst Matrix :");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter %d and %d elements : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nSecond Matrix :");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = 0;
            for (k = 0; k < n; k++)
            {
                sum += a[i][k] * b[k][j];
                c[i][j] = sum;
            }
        }
    }
    printf("Multiplication of the Matrix :");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
    }
    return 0;
}