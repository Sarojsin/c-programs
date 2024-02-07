// lets see how increament and decrement happens in pointer
#include <stdio.h>

int main()
{
    int a = 69;
    int *b = &a;
    printf("the address of pointer is %d\n", &a);
   
    printf("the address of pointer  is %d\n", b);
    b++;//used to increase pointer address
    printf("the address of pointer  is %d\n", b);
    printf("the address of pointer  is %d", b+1);//in pointer it also inrease
    printf("the address of pointer  is %d", b+2);// add 8
    return 0;
}// similar for subtraction