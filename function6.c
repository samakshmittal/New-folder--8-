#include <stdio.h>
int sumdigit(int n){
    int s=0;
    while(n!=0){
        int x=n%10;
        s=s+x;
        n/=10;
    }
    return s;
}
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("%d", sumdigit(n));
    return 0;
}