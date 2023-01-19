// Write a program in C to find sum of right diagonals of a matrix.

#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10][10], n, i, j,sum = 0;
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
        sum = sum + a[i][i];
    }
    printf("Addition of diagonals Matrix :");
    printf("%d", sum);
    return 0;
}