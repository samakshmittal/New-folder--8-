#include <stdio.h>
int sum(int n){
    if (n==1){
        return 1;
    }
    int s=sum(n-1);
    int x=s+n;
    return x;
}
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}