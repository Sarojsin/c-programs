//program to print the sum of first 10 natural number

#include<stdio.h>

int main(){
    int sum=0;
for (int i = 0; i <=10 ; i++)
{
sum=sum +i;//sum+=1 both meaning are same//
continue;
}
printf("The sum of first 10 natural number %d",sum);
return 0;
}