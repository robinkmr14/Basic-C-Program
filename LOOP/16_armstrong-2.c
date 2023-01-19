#include<conio.h>
#include<stdio.h>
int main()
{
    int n1,n2,x,i,sum;
    printf("Enter  range Number : ");
    scanf("%d %d",&n1,&n2);
    printf("Armstrong Numbers between %d an %d are : ", n1,n2);
    for(i = n1; i<n2 ; i++)
    {
        x = i;
        sum = 0;
        while(x > 0)
        {
            sum = sum + (x % 10) * (x % 10) * (x % 10);
            x = x / 10;
        }
        if(i == sum)
        {
        printf("%d  ",i);
        }
    }
    getch();
}