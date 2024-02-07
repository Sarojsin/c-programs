
#include <stdio.h>

int main()
{
    int a = 0, b = 1, n, sum;
    printf("Enter the number up to which you want:\t");
    scanf("%d", &n);
    printf("fabomicc series is %d \n", a);
    printf("fabomicc series is %d \n", b);
    for (int i = 0; i <=(n-3); i++)//i dont know why 3 
    {
        sum = a + b;
        a = b;
        b=sum;
        printf("fabomicc series is %d \n", sum);
    }

    return 0;
}