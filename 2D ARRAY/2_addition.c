// Write a program in C for addition of two Matrices of same size. 

#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, n;
    printf("Enter the size of the array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the %d and %d Element :", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nfirst Matrix :");
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
            printf("Enter the %d and %d Element :", i, j);
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
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSum of the Matrix : ");
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