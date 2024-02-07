//program to print sum of arr in function call by array as perameter
// in this program we see how we can change the value of array and call array
#include <stdio.h>
int add(int arr[])// ar and arr dont have to be same
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum=sum + arr[i];
        printf("the values of array[%d] is %d\n",i,arr[i]);
    } 
    arr[0]=1;// it changes the value of array in function call
    return sum;
}
int main()
{
    int sum;
    int arr[] = {6,2,3,4,5};
    sum = add(arr);
    printf("The sum of array is  %d\n", sum);
    printf("the value of arr[o]=%d\n",arr[0]);
    // printf("the value of arr[o]=%d\n",arr[0]);
    // printf("the value of arr[o]=%d\n",arr[0]);
    return 0;
}