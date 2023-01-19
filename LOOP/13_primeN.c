// C Program to Check Whether a Number is Prime or Not.

#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,num = 0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        if(n % i == 0)
        num++;
    }
    if(num == 2)
    printf("Number is Prime.");
    else
    printf("Number is not Prime.");
    getch();
}