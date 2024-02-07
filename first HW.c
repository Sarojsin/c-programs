// TO find avrage of three number

#include <stdio.h>
float avrage();
int main()
{
    int a,b,c;
   /* printf("enter first number:\n");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf("%d",&b);
    printf("enter third number:\n");
    scanf("%d",&c);  */  
    printf("Enter any three numbers");
    scanf("%d %d %d",&a,&b,&c);
printf(" the average of no is %f",avrage(a,b,c));

    return 0;
}
float avrage(int x, int y, int z)
{
    float d;
    d = (float)(z + y + z) / 3;//float is important in some condition
    return d;
}