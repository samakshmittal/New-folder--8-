#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    fgets(name, 100, stdin);
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    printf("Length is %d\n", count-1);
    printf("%d\n", strlen(name)-1);
    for(int i=0; name[i]!='\0'; i++){
        printf("%c", name[i]);
    }
    return 0;
}