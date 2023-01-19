// Using Function (WITH ARGUMENT NO RETURN) to check number is prime or not.


#include<conio.h>
#include<stdio.h>
void prime(int);    //Function Declaration(GLOBAL DECLARATION).
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    prime(n);       // Actual Arguments(Function Call by passing Value).
    return(0);
}
void prime(int n)       // Formal Arguments(Function Defination).
{
    int i,num = 0;
    
    for(i=1 ; i<=n ; i++)
    {
        if(n % i == 0)
        num++;
    }
    if(num == 2)
    printf("Number is Prime.");
    else
    printf("Number is not Prime.");
}
