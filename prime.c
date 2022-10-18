#include <stdio.h>
int main(){
    int n, z=0;
    printf("Enter number");
    scanf("%d", &n);
    int s=n/2+1;
    for(int i=2; i<=s; i++){
        if(n%i==0){
            z=1;
            break;
        }
    }
    if(z==1){
        printf("not prime");
    }
    else{
        printf("prime");
    }
    return 0;
}