//call by value 
// in this program we cant change the value of x and y bu calling it 
#include<stdio.h>
int sum(int a,int b);
int main(){
int x=5,y=4;
printf("before valuer of x and y of pointr is %d and %d\n ",x,y);
printf(" the sum of 5 and 4 is %d\n",sum(5,4));
printf("after valuer of x and y of pointr is %d and %d\n ",x, y);
return 0;
}
int sum(int a,int b){
int c;
c=a+b;
a=333;// this line is useless
b=444;// this line is useless
return c;
}
