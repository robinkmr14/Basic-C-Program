//  Using Function (WITH ARGUMENT NO RETURN) to Swap Two numbers.


#include<conio.h>
#include<stdio.h>
int a;
void swap(int,int);     //Function Declaration(GLOBAL DECLARATION).
int main()
{
    int n,i;
    printf("Enter two number number : ");
    scanf("%d %d",&n,&i);
    swap(n,i);          // Actual Arguments(Function Call by passing Value).
    return(0);
}
    void swap(int n,int i)      // Formal Arguments(Function Defination).
    {
        int j;
    j=n;
    n=i;
    i=j;
    printf("\nAfter swapping first number : %d",n);
    printf("\nAfter swapping second number : %d",i);
    }