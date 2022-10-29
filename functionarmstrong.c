#include <stdio.h>
#include <math.h>
int count(int n){
    int x=0;
    while(n!=0){
        n/=10;
        x++;
    }
    return x;
}
void armstrong(int n){
    int r, re=0, og=n;
    int a=count(og);
    while(og!=0){
        r=og%10;
        re=(int) (re+((float) (pow(r,a))));
        og/=10;
    }
    if(re==n){
        printf("%d is an armstrong number", n);
    }
    else{
        printf("%d in not an armstrong number", n);
    }
}
int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}