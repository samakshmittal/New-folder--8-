#include <stdio.h>
void dowork(int a, int b, int *sum, int *prod, int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=((a+b)/2);
}
int main(){
    int a, b, sum, prod, avg;
    printf("Enter numbers");
    scanf("%d%d", &a, &b);
    dowork(a, b, &sum, &prod, &avg);
    printf("Sum= %d, Product = %d, Average = %d", sum, prod, avg);
    return 0; 
}