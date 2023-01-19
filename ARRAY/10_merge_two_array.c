// C Program to Merge Two Array of same Size sorted Decending Order.


#include <conio.h>
#include <stdio.h>
int main()
{
    int a[20], b[20], i, j, n, c;
    printf("Enter size of array: ");  // taking the Size of the Array.
    scanf("%d", &n);

    printf("Enter the first array :\n", n); // Taking the element of the array. 
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the second  array :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    // To Merge Array into 1 array.

    for (i = n; i < n * 2; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i] = a[j];
            i++;
        }
    }
      //  Decending Order Loop.

    printf("Decending Order of the Merge Array : ");
    for (i = 0; i < n * 2; i++)
    {
        for (j = i + 1; j < n * 2; j++)
        {
            if (b[i] < b[j])        // If ascending change the sign.
            {
                c = b[i];
                b[i] = b[j];
                b[j] = c;
            }
        }
    }
    
    // Printing the Array.
    for (i = 0; i < n * 2; i++)
        printf("%d  ", b[i]);

    return 0;
}