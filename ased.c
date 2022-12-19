#include <stdio.h>
int x=5;
int main(){
    typedef static int *i;
    int j;
    i a= &j;
    printf("%d", i);
    
    return 0;
}