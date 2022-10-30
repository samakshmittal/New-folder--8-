#include <Stdio.h>
float remainder(int a, int b){
    return a%b;
}
int main(){
    int x, y;
    printf("Enter two numbers");
    scanf("%d%d", &x, &y);
    printf("Remainder is %f", remainder(x, y));
    return 0;
}