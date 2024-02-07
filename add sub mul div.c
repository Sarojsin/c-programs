//program to add,subtraction,multiplaction,division of any two integer using user defined type function with return type
#include<stdio.h>
int asmd(int a,int b){
int add,sub,mult,div;
return printf("sum is %d sub is %d mult is %d div is %d",add=a+b,sub=a-b,mult=a*b,div=a/b);
}

int main(){int a,b;
    printf("Enter any two number \t");
    scanf("%d %d",&a,&b);
    asmd(a,b);

return 0;
}