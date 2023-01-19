// Program in C to sort elements of the array in descending order.

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
    i=0;
    while(i<n)
    {
        for (j = 0; j < n ; j++)
        {
            if (a[j] < a[j+1])     
            {
                c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
            }
            i++;
        }
}
    
       printf("Elements of array in sorted Descending order : ");
    for (i = 0; i < n ; i++)
        printf("%d  ", a[i]);

    return 0;
}