// Write a program in C to print or display Lower triangular matrix. 

#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10][10], n, i, j;
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
    printf("Lower Traingular Matrix :\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            if (i >= j)
                printf("%d\t", a[i][j]);
            else
                printf("%d\t", 0);
        }
    }
    return 0;
}