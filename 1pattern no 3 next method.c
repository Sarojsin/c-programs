// by using function
/*1
 12
 123
 1234
 12345 */
#include <stdio.h>
void printstar(int n);
int main()
{
    int n;
    printf("enter your desire colmun\t");
    scanf("%d", &n);
    printstar(n);
    return 0;
}
void printstar(int n)
{

    if (n == 1)
    {
        printf("%d\n",n);//or printf("1\n");
        return;
    }
    printstar(n - 1);
    for (int i = 1; i < n+1; i++)
    {
        printf("%d", i);
    }
    printf("\n");
}