//program to test the number wheather the is multiple of 5 or not ,divisible by 7 but not by 11
#include<stdio.h>

int main(){
int num;
printf("Enter the number\t");
scanf("%d",&num);
if (num%5==0)
{ printf("\nThe number is divided by 5 ie %d\n",num);
    if (num%7==0)
    {
        printf("The mumber is divided by 5 and 7 ie %d\n",num);
     if (num%11!=0)
     {
     printf("The number is multiple of 5 and divided by 7 but not by 11 %d\n",num);
    }
    }
    }
    else
     printf("The number is multiple of 5 and not divided by 7 and by 11 %d\n",num);
    return 0;
}