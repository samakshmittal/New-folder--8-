#include <stdio.h>
int power(int a, int b){
    if (b==0){
        return 1;
    }
    else if (b==1){
        return a;
    }
    int x=a*power(a,b-1);
    return x;
}
int main(){
    int x, y;
    printf("Enter number and exponent");
    scanf("%d%d", &x, &y);
    printf("%d", power(x, y));
    return 0;
}