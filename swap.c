#include <Stdio.h>
void swap(int*a, int*b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int x, y;
    printf("Enter numbers");
    scanf("%d%d", &x, &y);
    printf("Before swapping : x = %d & y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping : x = %d & y = %d\n", x, y);
    return 0;
}