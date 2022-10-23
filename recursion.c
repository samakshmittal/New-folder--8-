#include <stdio.h>
void hello(int count){
    if (count==0){
        return;
    }
    printf("Hello World\n");
    hello(count-1);
}
int main(){
    hello(10);
}