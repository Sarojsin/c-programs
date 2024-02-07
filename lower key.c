//lower key ranges from 97 to 122
#include<stdio.h>

int main(){
char word;
printf("Enter your word \n");
scanf("%c",&word);
if (word>=97 && word<=122)
{
    printf("%c is lower case",word);
}
else{
    printf("%c is upper case ",word);
}
return 0;
}