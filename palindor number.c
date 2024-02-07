// program to print palindorme numbers in between the range
//user will provide the range
#include<stdio.h>
int palindorme(int num){

    int a, b, c, d, rev;

    a = num % 10;// from here we start reversing
    b = num / 10;
    c = b % 10;
    d = b / 10;
    rev = a * 100 + c * 10 + d;
    return rev == num;//it will return only which are equal
}
int main(){
    int num1,num2;
printf("Enter the range\t");
scanf("%d %d",&num1,&num2);
for (int  i = num1; i < num2; i++)
{
    if (palindorme(i))
    {
     printf("%d\n",i);
    }
}

return 0;
}
