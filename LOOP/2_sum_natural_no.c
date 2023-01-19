/* C program to Calculate the sum of natural number */


#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++)
    {
        sum+=i;
    }
    printf("Sum = %d",sum);
    getch();
}