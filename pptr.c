#include <stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    int *ptr=&n;
    int **pptr=&ptr;
    printf("%d", **pptr);
    return 0;
}