#include <stdio.h>
int main(){
    int n, s=1;
    printf("Enter number");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        s*=i;
    }
    printf("Factorial = %d", s);
    return 0;
}