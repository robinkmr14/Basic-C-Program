// C to insert New value in the array (POSITION).


#include <conio.h>
#include <stdio.h>
int main()
{
    int a[20], i, n, new, pos;
    printf("Enter the Size of the Array : ");
    scanf("%d", &n);
    printf("Enter %d Element :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter Element to Insert: ");
    scanf("%d", &new);

    printf("\nEnter the position : ");
    scanf("%d", &pos);

    for (i = n; i > pos - 1; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = new;
    printf("\nAfter insert the Element:\n");
    for (i = 0; i < n + 1; i++)
        printf("%d  ", a[i]);
    return 0;
}