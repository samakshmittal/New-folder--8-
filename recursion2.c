#include <stdio.h>
int factorial(int n){
    if (n==0){
        return 1;
    }
    int s=factorial(n-1);
    int x=s*n;
    return x;
}
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}