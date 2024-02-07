#include <stdio.h>

int main()
{
    int arr[5] = {4, 5, 6, 7, 9};
    int *ptr = arr; // & u may or u may not its ur choice
    printf("the value of arr[0]=%d\n", arr[0]);
    printf("the address of arr[0]=%d\n", &arr[0]); // or pointer
    printf("the  address of arr[0]=%d\n", ptr);
    printf("the value of arr[0]=%d\n", *ptr);
    return 0;
}