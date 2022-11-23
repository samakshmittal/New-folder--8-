#include <stdio.h>
int sum(int n, int *array[]);
int main(){
    int n;
    int array[1000];
    printf("Enter number of integers in array");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    printf("%d", sum(n, &array[n]));
    return 0;
}
int sum(int n, int *array[]){
    if (n==0){
        return array[0];
    }
    int s=sum(n-1, &array[n-1])+array[n];
    return s;
}