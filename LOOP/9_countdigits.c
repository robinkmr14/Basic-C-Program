// Program to Count the Number of Digits.

#include<conio.h>
#include<stdio.h>
void main()
{
    int n,num = 0;
    printf(" Enter the Number : ");
    scanf("%d",&n);
    while(n>0)
    {
        n = n/ 10;
        num ++;
    }
    printf("Number of Digits = %d",num);
}