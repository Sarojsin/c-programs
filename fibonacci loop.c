//a=0 and b=1
//sum=a+b
//c=sum
//a=b
//b=c put this in loop
#include<stdio.h>

int main(){
int a=0,b=1,c,num,sum;
printf("Enter the number\t");
scanf("%d",&num);
for (int i = 0; i < (num-2); i++)
{
    sum=a+b;
    c=sum;
    a=b;
    b=c;
}
printf("%d is the sum",sum);
return 0;
}
