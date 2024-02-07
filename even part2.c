/*
2
24
246
2468
*/
#include<stdio.h>

int main(){
int row;
printf("Enter the number of row \t");
scanf("%d",&row);
for (int i = 1; i <= row; i++)
{
    for (int j = 1; j<=i    ; j++)
    {
        printf("%d",2*j);
    }
    printf("\n");
}

return 0;
}