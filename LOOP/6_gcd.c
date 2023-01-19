// C program to Find GCD of two Numbers.


#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,i,gcd;
    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);
    for(i=1 ; i<=num1 && i<=num2 ; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        gcd = i;
    }
    printf("GCD of %d and %d is %d",num1,num2,gcd);
    getch();
}
