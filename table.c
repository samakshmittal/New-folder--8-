#include <stdio.h>
int main(){
    int n, a;
    printf("Enter number for which table is to be made");
    scanf("%d", &n);
    printf("Enter number till where table is to be stopped");
    scanf("%d", &a);
    for (int i=1; i<=a; i++){
        printf("%dX%d=%d\n", n, i, n*i);
    }
    return 0;
}