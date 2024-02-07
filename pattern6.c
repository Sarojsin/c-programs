/*
54321
54321
54321
54321
54321
*/
#include<stdio.h>

int main(){
int row;
   printf("Enter the number of rows\t");
    scanf("%d", &row);
    for (int i = row; i >0; i--)
    {
        for (int j = row; j >0 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
return 0;
}