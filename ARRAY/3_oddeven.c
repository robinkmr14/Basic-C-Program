// program in C to find Odd and Even Number in array.

#include<conio.h>
#include<Stdio.h>
int main()
{
    int a[10],i,even =0,odd =0;
    for(i=0 ; i<10 ; i++)
    {
        printf("\nEnter Number %d : ",i+1);
        scanf("%d",&a[i]);
    }
        for(i=0 ; i<10 ; i++)
        {
            if(a[i] % 2 == 0 && a[i] != 0)
            even++;
            else if (a[i] % 2 != 0 && a[i] != 0)
            odd++;

        }
        printf("There are %d Even Number\nThere are  %d odd Number",even,odd);
        return 0;
}