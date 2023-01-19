// program in C to sort elements of the array in Ascending order.


#include <conio.h>
#include <stdio.h>
int main()
{
    int a[20], i, j, n, c ;
    printf("Enter the Size of the Array : ");
    scanf("%d", &n);

    printf("Enter %d Element :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n ; i++)
    {
        for (j = i + 1; j < n ; j++)
        {
            if (a[i] > a[j])     
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
       printf("Elements of array in sorted ascending order : ");
    for (i = 0; i < n ; i++)
        printf("%d  ", a[i]);

    return 0;
}