#include <stdio.h>
int percent(int a, int b, int c){
    return ((a+b+c)/3);
}
int main(){
    int maths, science, sanskrit;
    printf("Enter marks of maths, science and sanskrit respectively");
    scanf("%d%d%d", &maths, &science, &sanskrit);
    printf("Percentage is %d", percent(maths, science, sanskrit));
    return 0;
}