// Write a program in C for a 2D array of size 3x3 and print the matrix. 

#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10][10], i, j, n;
    printf("Enter the size of the array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the %d and %d Element : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe matrix is :-\n");
     for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
    }
    return 0;
}