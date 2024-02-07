#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)//this is not condition 
    {
        printf("i am 11 \n"); // always it will print this line only
    }
    else
    {
        printf("i am not 11\n");
    }
    return 0;
}