// program to add two array and store in third array
// first initiling 1 and 2 array
//
#include <stdio.h>

int main()
{
    int a[3];
    int b[3];
    int sum[3];
    printf("Enter the values of first array\n");
    for (int i = 0; i <= 2; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the values of second array\n");
    for (int i = 0; i <= 2; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        sum[i] = a[i] + b[i];
        printf("the sum in third %darray is %d\n", i,sum[i]);
    }

    return 0;
}