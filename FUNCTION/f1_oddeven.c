// Using Function (WITH ARGUMENT NO RETURN TO) to check number is even or not. 


#include<conio.h>
#include<stdio.h>
void evenodd(int);//[Function Declaration(GLOBAL DECLARATION).This function call by any fun in the program.]
int main()
{
    int n;
    //void evenodd(int);[Function Declaration(LOCAL DECLARATION).This function is only call by main Function.]
    printf("Enter the number : ");
    scanf("%d",&n);
    evenodd(n); // Actual Arguments(Function Call by passing Value).
    return(0);
}
void evenodd(int n) // Formal Arguments(Function Defination).
{
    if(n % 2 == 0 && n!=0)
    {
        printf("%d is even",n);
    }
    else if (n % 2!=0 && n!=0 )
    printf("%d is odd",n);
    else
    printf("INVALID!!!!");
}