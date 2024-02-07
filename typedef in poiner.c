// most of the typedef is used in pointer to initilize
#include<stdio.h>

int main(){
int a=5;
int *b,c;// this will make pointer of b only
b=&a;
printf(" address of a=%d",b);//but c will not work


return 0;
}