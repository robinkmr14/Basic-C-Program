// Program in C to count the frequency of each element of an array.


#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,j,n,c;
    printf("Enter the Size of the Array : ");
    scanf("%d",&n);

    printf("Enter the Element :\n ",n);
    for(i=0; i<n; i++)
    {                                                        
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)                                           
    {                                                                
        c=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                c++;
               a[j] = 0;
            }
        }
        
        if(a[i] != 0)
        printf("Number of %d is %d\n",a[i],c);
    }
    return 0;

}
