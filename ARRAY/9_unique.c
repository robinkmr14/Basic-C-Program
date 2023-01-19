// Program in C to print all unique elements in an array.


#include <stdio.h>
#include <conio.h>

int main()
{
    int a[20],i,j,n;

    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter the first array : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Non repeated elements are: ");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
         {
            if (a[i] == a[j] && i != j)
                break;
        }
        if (j == n) 
        {
            printf("%d ", a[i]);
        }
    }


    return 0;
}