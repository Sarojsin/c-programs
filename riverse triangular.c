/*  
 *****
 ****
 ***
 **
 *                */

/*#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows\t");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/

// Next method

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows\t");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}