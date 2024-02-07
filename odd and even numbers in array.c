// program to count the numbers of odd and even number in array
// first array
//for loop than count 
#include <stdio.h>

int main()
{
    int i, even = 0, odd = 0;
    int num[10] = {12, 23, 45, 6, 56, 67, 23, 68, 90, 66};

    for (i = 0; i < 10; i++)
    {
        if ((num[i]) % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("the total even %d \n", even);
    printf("the total odd %d", odd);
    return 0;
}