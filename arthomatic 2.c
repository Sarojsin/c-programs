#include<stdio.h>

int main(){
int a[]={1,4,8,14,18};
//int *ptr=&a;
printf("the value of a[0] is %d \n",a[0]);//simply printing array
printf("the address of a[0] is %d \n",&a[0]);//to print address
printf("the address of a[0] is %d \n",a);//it aslo print address
printf("the value of a[0] is %d \n",a[1]);
printf("the address of a[1] is %d \n",&a[1]);//7 line tec
printf("the address of a[1] is %d \n",a+1);//similar to 8 line


printf("the value of a[0] is %d \n",*(&a[0]));
printf("the value of a[0] is %d \n",*(a));
printf("the value of a[1] is %d \n",*(&a[1]));
printf("the value of a[1] is %d \n",*(a+1));
return 0;
}
