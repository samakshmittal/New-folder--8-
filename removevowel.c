#include <stdio.h>
#include <string.h>
int main(){
    char a[1000];
    printf("Enter words");
    scanf("%s", &a);
    int n=strlen(a);
    for(int i=0; i<=n; i++){
        switch (a[i]){
            case 'a':
            continue;
            case 'e':
            continue;
            case 'i':
            continue;
            case 'o':
            continue;
            case 'u':
            continue;
            case 'A':
            continue;
            case 'E':
            continue;
            case 'I':
            continue;
            case 'O':
            continue;
            case 'U':
            continue;
        }
        printf("%c", a[i]);
    }
    return 0;
}