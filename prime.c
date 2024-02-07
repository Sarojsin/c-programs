// to check wthear the number is prime or composite
#include <stdio.h>
int prime(int num);
int main()
{
    int num;
    printf("Enter the number\t");
    scanf("%d", &num);
    if (prime(num))
    {
        printf("the number is prime %d", num);
    }
    else
    {
        printf("the number is composite %d", num);
    }
    return 0;
}
int prime(int num)
{
    for (int i = 2; i < num ; i++)//prime number starts from 2
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
// another way
/*
#include <stdio.h>
int isPrime(int num)
{
   if (num <= 1)                                      //this line is not so inportant
    {
        return 0; // 0 and 1 are not prime numbers    //  to this line
    }

    for (int i = 2; i *i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // If the number is divisible by any other number, it's composite
        }
    }

    return 1; // If no divisor found, it's a prime number
}

int main()
{
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime or composite
    if (isPrime(num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is a composite number.\n", num);
    }

    return 0;
}*/