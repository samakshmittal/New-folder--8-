#include <stdio.h>
int main(){
    for(char i='A'; i<='Z'; i++){
        char *p=&i;
        printf("%c\n", *p);
    }
    return 0;
}