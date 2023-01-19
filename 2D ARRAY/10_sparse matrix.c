// Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10][10], n, i, j,count=0;
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
        printf("\n");
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
                count++;
        }
    }
    if(count>n)
    {
        printf("The Given matrix are sparse \n");
    }
    else
        printf("The Given matrix are not sparse\n");
        printf("The Number of zero is : %d",count);
    
    return 0;
}