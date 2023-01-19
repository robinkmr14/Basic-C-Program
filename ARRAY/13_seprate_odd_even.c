// program in C to separate odd and even integers in separate arrays.


#include <conio.h>
#include <stdio.h>
int main()
{
    int a[20], b[20], c[20], i, n, j = 0, k = 0;
    printf("Enter the Size of the Array : ");
    scanf("%d", &n);

    printf("Enter the Element :\n ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0 && a[i] != 0)
            {
                b[j] = a[i];
                j++;
            }
            else if (a[i] % 2 != 0 && a[i] != 0)
            {
                c[k] = a[i];
                k++;
            }
        }
    }
    printf("even element are :");

    for (i = 0; i < j; i++)
        printf("%d ", b[i]);

    printf("\nOdd element are :");

    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
