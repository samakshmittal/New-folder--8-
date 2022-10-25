#include <stdio.h>
void temp(int n){
    int t;
    if (n<=17){
        t=0;
    }
    else{
        t=1;
    }
    switch (t){
        case 0:
        printf("Cold");
        break;
        case 1:
        printf("Hot");
        break;
    }
}
int main(){
    int n;
    printf("Enter temperature");
    scanf("%d", &n);
    temp(n);
    return 0;
}