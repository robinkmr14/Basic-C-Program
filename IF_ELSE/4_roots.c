/* C program to Find the Roots of a Quadratic Equation */

#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
    int a,b,c,dscrmnt,root1,root2,realpart,imagepart;
    printf("Enter the number of a,b,and c :");
    scanf("%d%d%d",&a,&b,&c);
    dscrmnt = b*b - 4 * a*c;
    if(dscrmnt>0)
    {
       root1 = (-b + sqrt(dscrmnt)) /(2*a);
      root2 =  (-b - sqrt(dscrmnt)) / (2*a);
    printf("root1 = %d and root2 = %d",root1,root2);   
    }
    else if (dscrmnt == 0)
   {
      root1  = root2 = (-b / (2*a));
    printf("roo1 = root2 = %d",root1);
   }
    else
   {
       realpart = (-b) / (2 * a);
       imagepart = sqrt(-dscrmnt) / (2 * a);
    printf("root1 = %d + %d and root2 = %d - %d",realpart,imagepart,realpart,imagepart);
   }
    getch();
}