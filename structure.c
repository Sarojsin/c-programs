// how to declear and initilize and accesing
//in this program we use typedef aslo 
#include <stdio.h>
#include <string.h>
typedef struct identity //we can remove typedef also
{
    char name[18];
    int roll;
    int number;
    char address[16];
} shortcut;//here we change struct identity withshortcut
// struct identity s1,s2,s3;//global variable

int main()
{// here we use changed name
    /*struct identity*/ shortcut s1, s2, s3; // local variable
    strcpy(s1.name,"saroj singh dhami");//copying exp 2 in exp 1
    printf("my name is %s\n", s1.name);
    s1.roll = 31;
    printf("my roll no is %d\n", s1.roll);
    s2.number = 984897627;
    printf("my number is %d\n", s2.number);
     strcpy(s3.address,"aithpur");
    printf("my name is %s\n", s3.address);
    return 0;
}