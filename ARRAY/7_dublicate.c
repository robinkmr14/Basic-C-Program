// Program in C to count a total number of duplicate elements in an array.


#include <stdio.h>
#include <conio.h>
void main()
{
    int i, a[50], j, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter any %d elements in array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Duplicate elements are: ", n);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {

            if (a[i] == a[j])
            {
                printf("%d\n", a[i]);
                break;
            }
        }
    }
    getch();
}