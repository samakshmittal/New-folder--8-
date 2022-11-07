#include <stdio.h>
int main(){
    int n, b=0;
    printf("Enter number of rows");
    scanf("%d", &n);
    for (int i=n; i>=1; --i){
        for(int j=1; j<=i; ++j){
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}