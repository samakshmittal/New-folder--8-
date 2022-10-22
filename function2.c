#include <stdio.h>
void namaste();
void monjour();
int main(){
    char nation;
    printf("I : Indian, F : French");
    scanf("%c", &nation);
    switch (nation){
        case 'I':
        namaste();
        break;
        case 'F':
        monjour();
        break;
    }
    return 0;
}
void namaste(){
    printf("Namaste");
}
void monjour(){
    printf("Monjour");
}