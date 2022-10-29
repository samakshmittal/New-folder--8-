#include <stdio.h>
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
        printf("%d and %d are not coprime", n, x);
    }
    else if (z==0){
        printf("%d and %d are coprime", n, x);
    }
}
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    coprime(n);
    return 0;
}