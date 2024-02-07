/*
program to reverse the number
arrray={1,2,4,5,6,8,9,0,10}
print arrayreverse={10,0,9,8,6,5,4,2,1,}
we have to sweep i with 8-i
cause i =0
*/

#include <stdio.h>
void rev(int number[])
{ int store;
    for (int i = 0; i < 9/2; i++)
{
    store = number[i];
    number[i] = number[8 - i];
    number[8 - i] = store;
}
}
int main()
{
    int number[] = {1, 3, 5, 7, 9, 11, 24, 35, 65};

    printf("The value of array before reverse \n");
    for (int i = 0; i < 9; i++)
    {
        printf("the value of array[%d]=%d\n ", i, number[i]);
    }
    rev( number);
    printf("The value of array after reverse \n");
    for (int i = 0; i < 9; i++)
    {
        printf("the value of array[%d]=%d\n ", i, number[i]);
    }

    return 0;
}