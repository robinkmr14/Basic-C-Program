// Using Function (WITH ARGUMENT NO RETURN) to print square.


#include<conio.h>
#include<stdio.h>
void square(int);       //Function Declaration(GLOBAL DECLARATION).
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    square(n);      // Actual Arguments(Function Call by passing Value).
    return(0);
}
void square(int n)      // Formal Arguments(Function Defination).
{
    int i;
    i = n * n;
    printf(" The Square of %d is : %d",n,i);

}