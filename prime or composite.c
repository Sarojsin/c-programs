// program to print the value is prime or composite

#include <stdio.h>

int main()
{
    int num, prime = 0;
    printf("Enter any number :\t");
    scanf("%d", &num);
    for (int i = 2; i < num; i++) // or num/2 can be aslo written
    {

        if (num % i == 0)
        {
            prime = 1;// this condition is important
        }
    }
    if (prime == 0)
    {
        printf(" Given number prime \t %d", num);
    }
    else
    {
        printf("Given number composite \t %d", num);
    }

    return 0;
}
