// multiplication on any num in reverse order

#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number\t");
    scanf("%d", &n);
    for (int i = 10; i>=0; i--)//int i=10;i;i-- both are same//
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}