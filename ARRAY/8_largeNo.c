// program in C print Large element in an array.


#include<conio.h>
#include<stdio.h>
int main()
{
    int a[10],i,large;
    for(i=0 ; i<10 ; i++)
    {
        printf("Enter the Numbers %d : ", i+1);
        scanf("%d",&a[i]);
    }
        large = a[0];

        for(i=0 ; i<10 ; i++)
        {
            if(a[i] > large)
            large = a[i-1];
        }

        printf(" Second large number is : %d",large);
        return 0;
}