// C proogram to Check Whether a Number is Palindarom or Not. 

#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,rev = 0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    i = n;
    while(n>0)
    {
        rev = (rev * 10) + n % 10;
        n = n / 10;
    }
    if(rev == i)
    printf("Number is Palindarom.");
    else
    printf(" Number is not Palindarom.");
    getch();
}