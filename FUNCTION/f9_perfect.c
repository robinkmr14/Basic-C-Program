// Using Function (WITH ARGUMENT NO RETURN) to check number is Perfect or not with a range.


#include<conio.h>
#include<stdio.h>
void perfect(int,int);      //Function Declaration(GLOBAL DECLARATION).
int main()
{
    int n1,n2;
    printf("Enter two Numbers : ");
    scanf("%d%d",&n1,&n2);
    perfect(n1,n2);        // Actual Arguments(Function Call by passing Value).
    return 0;
}
    void perfect(int i,int j)       // Formal Arguments(Function Defination).
    {
        int sum,n;
        while(i < j)
        {
            sum = 0;
            for(n = 1 ; n < i ; n++)
            {
                if(i % n == 0)
                sum = sum + n;
            }
            if(sum == i)
            printf("\n%d",i);
            i++;
        }
    }
