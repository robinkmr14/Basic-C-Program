// C Program to Calculate the Power of a Number.


#include<conio.h>
#include<stdio.h>
void main()
{
    int j,k,i,pow = 1;
    printf("Enter the Number and Enter the Power : ");
    scanf("%d %d",&j, &k);
    for(i=1 ; i<=k;i++)
    {
        pow = pow * j;
    }
    printf("Power of a Number  is = %d",pow);
    getch();
}