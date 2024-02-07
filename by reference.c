// we will call the value by reference

#include<stdio.h>
void not_swep(int x,int y);
void swep(int *x,int *y);
int main(){
int a=2,b=3;
printf("before value of x and y of pointr is %d and %d\n ",a,b);
not_swep(a,b);//which will not swep
printf("after value of x and y of pointr is %d and %d\n ",a,b);
swep(&a,&b);//it will swep the value it is providing address to function
printf("after value of x and y of pointr is %d and %d\n",a,b);
return 0;
}
void not_swep(int x,int y){//it is accepting value of a and b
int temp;
x=temp;
x=y;
y=temp;

}
void swep(int *x,int *y){// it is accepting address of a and b
int temp;
temp=*x;
*x=*y;
*y=temp;
}