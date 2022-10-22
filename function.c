#include <stdio.h>
void hello();
void goodbye();
int main(){
    hello();
    goodbye();
    return 0;
}
void hello(){
    printf("Hello");
}
void goodbye(){
    printf("good bye");
}