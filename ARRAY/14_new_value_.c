// Program in C to insert New value in the array.


#include <conio.h>
#include <stdio.h>
int main()
{
    int a[20], i, n, new;
    printf("Enter the Size of the Array : ");
    scanf("%d", &n);

    printf("Enter %d Element :\n ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter Element to Insert: ");
    scanf("%d", &new);
    for (i = n; i >= new; i--)
    {
        a[i] = a[i - 1];
    }
    a[i] = new;
    n++;
    printf("\nAfter insert the Element :\n");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);
    return 0;
}