// program for 10 student of n student marks

#include <stdio.h>

int main()
{
    int mark[7];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the number %d:", i+2);//we can write anything i or i+1 or i+2
        scanf("%d", &mark[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("marks :%d :of student no :%d", i+1, mark[i]);
        printf("\n");
    }

    return 0;
}