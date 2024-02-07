// to print -10 -12 -14 -18 -26 -42 -74
#include<stdio.h>
#include<math.h>
int main(){
int num,a=10;
printf("Enter the number ");
scanf("%d",&num);
for (int i = 0; i < num; i++)
{
    printf("%d\n",a);
     a=10 +pow(2,i);

}

return 0;
}