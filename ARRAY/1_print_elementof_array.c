// Program in C to store elements in an array and print it. 

#include<conio.h>
#include<Stdio.h>
int main()
{
    int a[10],i;
    for(i=0 ; i<10 ; i++)
    {
        printf("\nEnter Number : ");
        scanf("%d",&a[i]);
    }
    printf("\nThe Array Elements are : " );
    for(i=0 ; i<10 ; i++)
    printf("\n%d",a[i]);
    return 0;
    
}
