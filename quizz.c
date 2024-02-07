// In this program first is print 5 and increase by 1 ie i++
// again in step second first increase by 1 and print it ie ++i
//finally it print i with added
#include<stdio.h>

int main(){
int i=5;
printf("%d %d %d",i,++i,i++);//in gcc copmiler print function print from right to left 
return 0;
}