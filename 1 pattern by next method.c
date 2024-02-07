// by using function

#include <stdio.h>
void printstar(int n);
int main()
{
    int n;
    printf("enter your desire colmun\t");
    scanf("%d", &n);
    printstar(n);
    return 0;
}
void printstar(int n)
{

    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printstar(n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
}
