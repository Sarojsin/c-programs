#include <stdio.h>
int main()
{
    int a;
    printf("\n enter any number");
    scanf("%d", &a);
    if (a <= 9)
    {
        printf("the is single digit number %d", a);
    }
    else
    {
        printf("the number is two digit number %d", a);
    }
    return 0;
}