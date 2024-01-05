#include <stdio.h>

int main()
{
    int a;
    printf(" \n Enter any number");
    scanf("%d",&a);
    if (a%2==0){
        printf("the number is even that is %d ",a);
    }
    else
    {
        printf("the number is odd %d",a); 
    }
    return 0;
}