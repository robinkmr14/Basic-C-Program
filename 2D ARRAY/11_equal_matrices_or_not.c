// Write a program in C to accept two matrices and check whether they are equal. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10][10], b[10][10], n, i, j,count=0;
    printf("Enter the size of the aaray :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("enter the %d & %d elements :", i, j);
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
            printf("enter the %d & %d elements :", i, j);
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
            if (a[i][j] != b[i][j])
            {
            count =1;
            }
    }
    if(count== 0)
    printf("The given matrices are equal \n");
    else
    printf("The given matrices are not equal ");
    return 0;
}