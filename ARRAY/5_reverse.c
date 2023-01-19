// Program in C to read n number of values in an array and display it in reverse order.

#include<conio.h>
#include<stdio.h>
int main()
{
    int a[3],i;
    for(i=0 ; i<3 ; i++)
    {
        printf("Enter the Number %d :",i+1);
        scanf("%d",&a[i]);
    }
        for(i=3-1; i>=0; i--)
        printf("%d",a[i]);
        return 0;
}