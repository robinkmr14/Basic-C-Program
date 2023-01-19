// C Program to Check Whether a Number is Prime or Not with a range.


#include<conio.h>
#include<stdio.h>
void main ()
{
    int num1,num2,i,j;
    printf("Enter range Numbers : ");
    scanf("%d %d",&num1,&num2);
    for(i=num1 ; i<= num2 ; i++)
    {
        for(j=2 ; j<=i ; j++)
        {
            if(i % j == 0) 
            break;
        }
        if(i == j)
        printf("%d ",j);
    }
        getch();
}