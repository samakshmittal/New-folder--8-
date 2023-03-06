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
        printf("%d is an armstrong number\n", n);
    }
    else{
        printf("%d in not an armstrong number\n", n);
    }
}
void coprime(int n){
    int r, x=0, z=0;
    int og=n;
    while(og!=0){
        r=og%10;
        og/=10;
        x=x*10+r;
    }
    for(int i=2; i<=n; i++){
        if(n%i==0){
            if(x%i==0){
                z=1;
                break;
            }
        }
    }
    if (z==1){
        printf("%d and %d are not coprime numbers\n", n, x);
    }
    else if (z==0){
        printf("%d and %d are coprime numbers\n", n, x);
    }
}
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
    printf("Enter a number");
    scanf("%d", &n);
    armstrong(n);
    coprime(n);
    printf("Factorial of %d is %d\n", n,factorial(n));
    return 0;
}