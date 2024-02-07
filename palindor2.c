#include <stdio.h>
int Palindorme(int i)
{

    int a, b, c, d, rev;

    a = i % 10;
    b = i / 10;
    c = b % 10;
    d = b / 10;
    rev = a * 100 + c * 10 + d;
    return rev == i;
}
int main()
{
    for (int i = 100; i < 200; i++)
    {
        if (Palindorme(i))
        {
            printf("%d\n", i);
            
        }
    } return 0;
}

// different way


/*
#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    printf("Palindrome numbers in the range of 200:\n");

    for (int i = 1; i <= 200; i++) {
        if (isPalindrome(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}*/
