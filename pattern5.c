/*
54321
4321
321
21
1
*/
#include <stdio.h>

int main()
{
    int row;
    printf("Enter the number of rows");
    scanf("%d", &row);
    for (int i = row; i >= 1; i--)
    {
        for ( int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}