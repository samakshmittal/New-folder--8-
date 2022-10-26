#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    int *p1=&a;
    int *p2=&b;
    if (*p1>*p2){
        printf("%d is greater", *p1);
    }
    else{
        printf("%d is greater", *p2);
    }
    return 0;
}