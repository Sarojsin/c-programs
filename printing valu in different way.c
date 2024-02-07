// to print the value and address
#include <stdio.h>

int main()
{
    int a ;
    printf("Enter your no :\t");
    scanf("%d",&a);
    int *b ;//=&a can also be
    b=&a;
    printf("The value of a is %d\n",a);//oldest method
    printf("The value of a is %d\n",*b);//new approch by using pointer
    printf("The value of b is %u\n",*(&b));//to print the value stored in pointer
    printf("The  address of a is %u\n",&a);
    printf("The  address of a is %u\n",b);
    printf("The address of b is %u\n",&b);
    return 0;
}