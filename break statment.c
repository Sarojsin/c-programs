//program use break statement and loop
// this program will run till given number and break when both given num and a is equal 
// kind of game
#include<stdio.h>

int main(){
    int num,a ;
    printf("Enter  any numbers  \t");
    scanf ("%d",&num);

for (int i = 1; i < num; i++)
{    printf("numbers of try %d",i);
    printf("Enter your number  \t");
    scanf ("%d",&a);
    if (num == a)// this condition is for breaking this loop
    {
        break;
    }
}
return 0;
}