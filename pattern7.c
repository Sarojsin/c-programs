/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include <stdio.h>

int main()
{
    int row ,k=1;
    printf("Enter the number of row \t");
    scanf("%d", &row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }

    return 0;
}