// program to print any condition using switch statment
#include<stdio.h>

int main(){
    int rating;
printf("Enter any of ur choice rating:\t");
scanf("%d",&rating);
switch (rating)
{
case 1: 
    printf("The rating is 1 star");
    break;
case 2: 
    printf("The rating is 2 star");
    break;
    case 3: 
    printf("The rating is 3 star");
    break;
    case 4: 
    printf("The rating is 4 star");
    break;
    case 5: 
    printf("The rating is 5 star");
    break;
default:
printf("you are not intrested to give any star");
    break;
}
return 0;
}