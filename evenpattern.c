/*
2 4 6 8
4 6 8
6 8 
8
*/
#include<stdio.h>

int main(){
int row;
printf("Enter the number of rows \t");
scanf("%d",&row);
for (int i = 1; i <= row ; i++)
{
   for (int j = i; j <=row; j++)
   {
    printf("%d",2*j);
   }
   
  printf("\n");
}

return 0;
}