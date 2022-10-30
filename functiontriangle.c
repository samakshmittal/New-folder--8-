#include <stdio.h>
int triangle_area(int base, int height){
    int a=(0.5)*(base)*(height);
    return a;
}
int main(){
    int base, height;
    printf("Enter base and height of the right angled triangle");
    scanf("%d%d", &base, &height);
    printf("Area of right angled triangle is %d", triangle_area(base, height));
    return 0;
}