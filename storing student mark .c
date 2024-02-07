// storing the data of marks of student

#include <stdio.h>

int main()
{
    int mark[4];


    printf("Enter the mark: \t");
    scanf("%d", &mark[0]);


    printf("Enter the mark: \t");
    scanf("%d", &mark[1]);


    printf("Enter the mark: \t");
    scanf("%d", &mark[2]);


    printf("Enter the mark: \t");
    scanf("%d", &mark[3]);


    printf("%d or  %d or %d and %d",mark[0],mark[1],mark[2],mark[3]);

    return 0;
}