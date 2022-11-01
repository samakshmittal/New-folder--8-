#include <Stdio.h>
int add(int n, int *array[n]){
    if (n==0){
        return *array[0];
    }
    int s=add(n, array[n])+array[n];
    return s;
}
int main(){
    int n, *array[n];
    printf("Enter number of integers in array");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    printf("%d", add(n, &array[n]));
    return 0;
}