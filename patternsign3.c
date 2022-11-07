#include <stdio.h>
int main(){
    int n, b=0;
    printf("Enter number of rows");
    scanf("%d", &n);
    for (int i=1; i<=n; ++i, b=0){
        for(int j=1; j<=n-i; ++j){
            printf("   ");
        }
        while(b!=2*i-1){
            printf("*  ");
            ++b;
        }
        printf("\n");
    }
    return 0;
}