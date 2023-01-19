// C program to find Factorial of a Number.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,fact=1;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(i=n ; i>=1; i--)
    {
      //  printf("%d*",i);
        fact = fact * i;
        
    }
    printf(" %d ",fact);
    getch();
}