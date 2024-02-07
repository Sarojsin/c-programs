// program for a student to pass
// student must score more than or equal to 35 marks in each subject
// student must score more than 40%in total
#include <stdio.h>

int main()
{
    char name[50];
    int eng, nep, math, total;
    printf("enter the name of student:\t");
    scanf("%s", &name);
    printf("enter the name of mark in eng:\t");
    scanf("%d", &eng);
    printf("enter the name of mark in nep:\t");
    scanf("%d", &nep);
    printf("enter the name of mark in math:\t");
    scanf("%d", &math);
    total = (eng + nep + math) / 3;
    if ((total >= 40) && eng > 35 && nep > 35 && math > 35)
    {
        printf("%s gets %d %d %d in each sub and total %d and pass the exam", name, eng, nep, math, total);
    }
    else
    {
        printf("%s gets %d %d %d in each sub and total %d and fail the exam", name, eng, nep, math, total);
    }

    return 0;
}