// program to find the factorial of any number//

#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter the number you want \t");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        fact = i * fact;
        continue; // this step is not required because loop will run automatic and value will update as
    }
    printf("fact of %d is %d", n, fact);
    return 0;
}