// add subtraction in new approch
#include <stdio.h>

int main()
{
    int a, b, sum, subtraction, mult;
    float div;

    printf("Enter any two number ");
    scanf("%d %d", &a, &b);// %d ko place ma no coma
    printf("the addition of two number is %d \n",(a+b));
      printf("the subtraction of two number is %d \n",(a-b));
        printf("the multiplaction of two number is %d \n",(a*b));
          printf("the division of two number is %d \n",(a/b));
    return 0;
}