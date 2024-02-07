// program for union which holde only higher memory space in program it store one higher memory
// similar to structure
#include <stdio.h>
#include <string.h>
union identity // we can use typedef also like typedef union identity
{
    char name[18];
    int roll;
    int number;
    char address[126];
}; // aslo add here some thing shor name to call;
int main()
{
    union identity s1;
    strcpy(s1.address, "aithpur");
     s1.roll = 31;
    s1.number = 984897627;
     printf("my name is %s\n", s1.address);
    printf("my number is %d\n", s1.number);
    printf("my roll no is %d\n", s1.roll);
    return 0;
}
