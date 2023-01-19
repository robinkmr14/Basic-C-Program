// Write a program in C to find the majority element of an array.

#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10], n, i, j, num, count;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the elements %d :", i + 1);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    printf("%d ",a[i]);

    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
    if (count > n / 2)
    {
        printf("\nmajority element in the given array : %d", a[i]);
        break;
    }
    else
    {
        printf("\nThere are no Majority Elements in the given array.");
        break;
    }
    }
    return 0;
}
