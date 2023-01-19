// Program in C to find the maximum and minimum element in an array.


#include<conio.h>
#include<stdio.h>
int main()
{
    int a[3],i,max,min;
    for(i=0 ; i<3 ; i++)
    {
        printf("Enter the Numbers %d : ", i+1);
        scanf("%d",&a[i]);
    }
        max = a[0];
        min = a[0];

        for(i=0 ; i<3 ; i++)
        {
            if (a[i] > max)
            max = a[i];
            
            else if(a[i] < min)
            min = a[i];
        }

        printf("Maximum number is : %d",max);
        printf("Minimun number is : %d",min);
        return 0;
}