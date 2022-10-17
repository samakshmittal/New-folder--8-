#include <stdio.h>
int main(){
    int n, r, re=0;
    printf("Enter a three digit number");
    scanf("%d", &n);
    int og=n;
    while(og!=0){
        r=og%10;
        re=re+r*r*r;
        og/=10;
    }
    if(re==n){
        printf("%d is an armstrong number", n);
    }
    else{
        printf("%d in not an armstrong number", n);
    }
    return 0;
}