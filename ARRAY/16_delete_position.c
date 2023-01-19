// Program in C to Delete the position in array.


#include <conio.h>
#include <stdio.h>
int main()
{
    int a[20], i, n,pos;
    printf("Enter the Size of the Array : ");
    scanf("%d", &n);
    printf("Enter %d Element :\n", n);
    for (i = 0; i < n; i++)                                             
    {                                                                  
        scanf("%d", &a[i]);
    }
    printf("\nEnter the position : ");
    scanf("%d", &pos);
       for (i = pos-1; i < n; i++)
    {
        a[i] = a[i+1];
    }
    printf("\nAfter delete the Element:\n");
    for (i = 0; i < n-1; i++)
        printf("%d  ", a[i]);
    return 0;
}
