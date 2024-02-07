/*
2468
246
24
2
*/
#include <stdio.h>

int main()
{
    int row;
    printf("Enter the number of row");
    scanf("%d", &row);
    for (int i = row; i >= 0; i--)
    {
        for (int j=1; j<=i ; j++)
        {
            printf("%d", 2 * j);
        }
        printf("\n");
    }

    return 0;
}