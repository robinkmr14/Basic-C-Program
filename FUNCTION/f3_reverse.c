// Using Function (WITH ARGUMENT NO RETURN) print reverse number.


#include<conio.h>
#include<stdio.h>
void rev(int);       //Function Declaration(GLOBAL DECLARATION).
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    rev(n);         // Actual Arguments(Function Call by passing Value).
    return(0);
}
void rev(int n)     // Formal Arguments(Function Defination).
{
    int rev;
    while(n>0)
    {
        rev = n % 10;
        printf("%d",rev);
        n = n / 10;
        
    }
}