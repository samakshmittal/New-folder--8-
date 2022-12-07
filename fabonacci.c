#include <stdio.h>
int main(){
    int t1=0, t2=1, n, i=1, x=0;
    printf("Enter number");
    scanf("%d", &n);
    printf("%d\n", t1);
    while(i<n){
        t1=t2;
        t2=x;
        x=t1+t2;
        ++i;
        printf("%d\n", x);
    }
    return 0;
}