////program to print the HCF and LCM of two integer
#include <stdio.h>

int main()
{
    int a, b, hcf;
    printf("Enter any two number\t");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        for (int i = 1; i < b + 1; i++)
        {
            if (b / i && a / i)
            {
                hcf = i;
            }
        }
        printf("HCF IS %d", hcf);
    }
    else
    {
        for (int i = 1; i < a + 1; i++)
        {
            if (b/i && a/i)
            {
                hcf = i;
            }
        }
        printf("HCF IS %d", hcf);
    }

    return 0;
}