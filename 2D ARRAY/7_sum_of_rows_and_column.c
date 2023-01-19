// Write a program in C to find sum of rows an columns of a Matrix.

#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10][10], n, i,j,sum, add;
    printf("Enter the Size of the Array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter %d and %d Elements : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum += a[i][j];
            a[i][n] = sum;
        }
    }
    printf("\nFirst Matrix :");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n + 1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("sum of Column :\n");
    for (i = 0; i < n; i++)
    {
        add = 0;
        for (j = 0; j < n; j++)
        {
            add += a[j][i];
        }
        printf("%d\t", add);
    }
    return 0;
}