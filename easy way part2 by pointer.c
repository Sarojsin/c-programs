// program
#include <stdio.h>

int main()
{
    int mark[4];
    int *ptr;
     ptr = &mark[0];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the number %d:", i + 1); // we can write anything i or i+1 or i+2
        scanf("%d", ptr);
        ptr ++;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("marks :%d :of student no :%d", i + 1, mark[i]);
        printf("\n");
    }

    return 0;
}