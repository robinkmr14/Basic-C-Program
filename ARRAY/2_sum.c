// Program in C to store elements in an array and Add all the elements and print it. 

#include<conio.h>
#include<Stdio.h>
int main()
{
    int a[10],i,sum =0;
    for(i=0 ; i<10 ; i++)
    {
        printf("\nEnter Number : ");
        scanf("%d",&a[i]);
    }
        for(i=0 ; i<10 ; i++)
        {
            sum+=a[i];
        }
        printf("The Sum is : %d",a[i]);
        return 0;
}