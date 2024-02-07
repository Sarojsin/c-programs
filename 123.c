/*
12345
1234
123
12
1

*/
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows\t");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}