// C Program to Reverse a Number.

#include<conio.h>
#include<stdio.h>
void main()
{
    int i,rev ;
    printf("Enter the NUmber : ");
    scanf("%d",&i);
    printf("Reverse number is : ");
    for( i ; i > 0 ;)
    {
        rev = i % 10 ;
     printf("%d",rev);
        i = i/ 10;
    }

    getch();
    }