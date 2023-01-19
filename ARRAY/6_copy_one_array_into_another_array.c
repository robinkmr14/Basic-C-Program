// Program in C to copy the elements of one array into another array. 


#include<conio.h>
#include<stdio.h>
int main ()
{
    int a[10],i,n[10],merge = 0;
    for(i=0 ; i<10 ;i++)
    {
        printf("Enter the Number %d :",i+1);
        scanf("%d",&a[i]);
    }
        printf("The first Elements are :");

    for(i=0 ; i<10 ; i++)

        printf("%d ,",a[i]);

    for(i=0 ; i<10 ; i++)

            n[i] = a[i];

        printf("\nThe Second elements are :");
    for(i=0 ; i< 10 ; i++)

        printf("%d ,",n[i]);
        return 0;
}