#include <stdio.h>
int main(){
    char a;
    printf("Enter character");
    scanf("%c", &a);
    if (a>='A' && a<='Z'){
        printf("Upper case");
    }
    else if (a>='a' && a<='z'){
        printf("Lower case");
    }
    else if (a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;
}