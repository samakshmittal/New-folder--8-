#include <Stdio.h>
int main(){
    int n,s;
    printf("Enter number");
    scanf("%d", &n);
    printf("Enter number from where table is to bhi printed");
    scanf("%d", s);
    for(int i=n; i>=1; i--){
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}