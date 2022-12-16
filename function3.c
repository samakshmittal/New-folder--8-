#include <stdio.h>
#include <math.h>
float square(float side){
    return side*side;
}
float circle(float radius){
    return (M_PI)*radius*radius;
}
float rectangle(float a, float b){
    return a*b;
}
int main(){
    float side, radius, a, b;
    printf("Enter side of square");
    scanf("%f", &side);
    printf("%f\n", square(side));
    printf("Enter radius of circle");
    scanf("%f", &radius);
    printf("%f\n", circle(radius));
    printf("Enter length and breadth of rectangle");
    scanf("%f%f", &a, &b);
    printf("%f\n", rectangle(a, b));
    return 0;
}