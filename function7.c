#include <stdio.h>
#include <math.h>
double squareroot(int n){
    return sqrt(n);
}
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("%lf", squareroot(n));
    return 0;
}