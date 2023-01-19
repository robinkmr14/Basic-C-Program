// Using Function (WITH ARGUMENT NO RETURN) to check number is Armstrong & Perfect or not.



#include<conio.h>
#include<stdio.h>
void armstrong(int);        //Function Declaration(GLOBAL DECLARATION).
void perfectnumber(int);    //Function Declaration(GLOBAL DECLARATION).
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);//153
    armstrong(num);          // Actual Arguments(Function Call by passing Value).
    perfectnumber(num);      // Actual Arguments(Function Call by passing Value).
    getch();
}
    void armstrong(int i)       // Formal Arguments(Function Defination).
{
    int x,sum = 0;
        x = i;
        for(;i>0;)
    {
        sum = sum + (i % 10) * (i % 10) * (i % 10);
        i = i / 10;
    }
        if(sum == x)
        printf("Armstrong Number.");
        else
        printf(" Not Armstrong Number.");
}
    void perfectnumber(int j)
    {
        int k,add=0;
        for(k=1; k<j ; k++)
        {
            if(j % k==0)
            add+=k;
        }
        if(add == j)
        printf("Number is perfect");
        else 
        printf("Number is not perfect");
        
    }

