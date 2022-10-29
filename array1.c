#include <stdio.h>
#include <string.h>
int odd(int a[], int n){
    int count=0;
    for(int i=0; i<=n-1; i++){
        if(a[i]%2!=0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    int ar[1000];
    for (int i=0; i<strlen(ar[]); i++){
        scanf("%d", ar[i]);
        printf("%d\n", ar[i]);
    }
    printf("%d", odd(ar, n));
    return 0;
}