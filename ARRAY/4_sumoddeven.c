// program in C to Add Even numbers and Odd numbers in array.

#include<conio.h>
#include<Stdio.h>
int main()
{
    int a[10],i,sum=0,mul =1;
    for(i=0 ; i<10 ; i++)
    {
        printf("\nEnter Number %d : ",i+1);
        scanf("%d",&a[i]);
    }
        for(i=0 ; i<10 ; i++)
        {
            if(a[i] % 2 == 0 && a[i] != 0)
            sum+=a[i];
            else if (a[i] % 2 != 0 && a[i] != 0)
            mul*=a[i];

        }
        printf("sum of Even Number is : %d\n Product of odd Number is : %d",sum,mul);
        return 0;
}