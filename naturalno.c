#include <stdio.h>
int main(){
    int n, s=0, a=1;
    printf("Enter number till which sum is required");
    scanf("%d", &n);
    while(a<=n){
        s=s+a;
        a++;
    }
    printf("%d", s);
    return 0;
}