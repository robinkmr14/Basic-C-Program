// Write a program in C to find a pair with given sum in the array.

#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10], n, i, j, num, p, sum;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the elements %d :", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the number :");
    scanf("%d", &num);

    printf("The %d number of pair is :\n", num);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            p = a[i] + a[j];
            if (num == p)
            {
                printf("[%d,%d]\n", a[i], a[j]);
                break;
            }
        }
    }
    return 0;
}
