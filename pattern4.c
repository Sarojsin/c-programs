/*
       *
     * * *
   * * * * *
 * * * * * * *
*/
//program to print * and some space in between
#include<stdio.h>

int main(){
    int nor;
    printf("Enter number of rows in nor \t");
    scanf("%d",&nor);
for (int i = 1; i <= nor; i++)
{
    for (int j = i; j <=(nor-1); j++)// this loop is for spaceing
    {
        printf(" ");
    }
   for (int k = 1; k <=(2*i)-1 ; k++)// this line is for * printng
   {
    printf("* ");
   }
   printf("\n");
}

return 0;
}