#include <stdio.h>
int fibonacci(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    int x=fibonacci(n-1)+fibonacci(n-2);
    return x;
}
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}