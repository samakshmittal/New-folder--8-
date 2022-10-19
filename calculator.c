#include <stdio.h>
#include <math.h>
int main()
{
    char a;
    int x,y;
    printf("Enter the operator that is to be used : + for add ; - for subtract ; * for multiply ; / for divide");
    scanf("%c", &a);
    printf("Enter numbers :");
    scanf("%d%d", &x, &y);
    int c=0;
    if (a=='+')
    {
        c=x+y;
    }
    else if (a=='-')
    {
        c=x-y;
    }
    else if (a=='*')
    {
        c=x*y;
    }
    else if (a=='/')
    {
        c=x/y;
    }
    printf("%d",c);
    return 0;
}