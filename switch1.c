#include <stdio.h>
int main()
{
    char operator;
    int a,b;
    printf("Enter operator =, -, *, /");
    scanf("%c", &operator);
    printf("Enter numbers");
    scanf("%d%d", &a, &b);
    int result=0;
    switch (operator)
    {
        case '+' :
            result=a+b;
            break;
        case '-' :
            result=a-b;
            break;
        case '*' :
            result=a*b;
            break;
        case '/' :
            result=a/b;
            break;
        default:
            printf("Error");
    }
    printf("Result %d",result);
    return 0;
}