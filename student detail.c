/*#include <stdio.h>

int main()
{
    int a;
    char name[30];
    printf("enter the name of student \t");
    scanf("%s", &name);
    printf("enter the mark of the student  \t");
    scanf("%d", &a);
    if (a >= 40)
    {
        printf("%s student got pass rank and %d", name, a);
    }
    else
    {
        printf("%s student got fail rank and %d", name, a);
    }
    return 0;
}*/
#include <stdio.h>

int main ()
{
   char yourname;
   int yourage;

    printf("Whats your name?\t");
    scanf("%c",&yourname); 
    printf("How old are you?\t");
    scanf("%d",&yourage);
    printf("You are %d years old and your name is %c\n\n\n",yourage,yourname);
     system("pause");
    return(0);
}