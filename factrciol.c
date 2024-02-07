// using function and recurction
#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter the number:\t");
    scanf("%d", &n);
    printf("the factriaol of %d is %d", n, fact(n));

    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
return n *fact(n - 1);//this is called recurtation
    }


/*#include<stdio.h>
 int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

 int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}*/