#include <stdio.h>
//cell by value
void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("a = %d & b = %d\n", a, b);
}

//cell by reference
void _swap(int*a, int*b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int x, y;
    printf("Enter numbers");
    scanf("%d%d", &x, &y);
    swap(x, y);
    printf("x = %d & y = %d\n", x, y);
    _swap(&x, &y);
    printf("x = %d & y = %d\n", x, y);
    return 0;
}