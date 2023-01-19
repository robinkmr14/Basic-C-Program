//  Write a program in C to find factorial.

#include<conio.h>
#include<stdio.h>
int fact(int);
int main()
{
    int n,result;
    printf("Enter the number : ");
    scanf("%d",&n);
    result = fact(n);
    printf(" Factorial is %d",result);
    return 0;
}
int fact(int i)
{
    int j;
    if(i==1)
    return (1);
    else
    {
     j = i * fact(i-1);
    }
    return j;
          
}