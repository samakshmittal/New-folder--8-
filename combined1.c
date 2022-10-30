#include <stdio.h>
int triangle_area(int base, int height){
    int a=(0.5)*(base)*(height);
    return a;
}
float remainder1(int a, int b){
    return a%b;
}
void swap(int*a, int*b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int x, y;
    printf("Enter two numbers");
    scanf("%d%d", &x, &y);
    printf("Area of right angled triangle is %d\n", triangle_area(x, y));
    printf("Remainder is %f\n", remainder1(x, y));
    printf("Before swapping : x = %d & y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping : x = %d & y = %d\n", x, y);
    return 0;
}