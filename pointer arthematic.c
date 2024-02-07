// to add in ponter 
//of any integer
#include<stdio.h>

int main(){
int a=5;//simillarly for float=4 and char=1
int *z=&a;
printf("The value of z is %u\t",z);//it will print the value of address of a
z++;//simillarly we can subtract by z-=1 or z--
printf("\n The value of z is %u\t",z);
return 0;
}