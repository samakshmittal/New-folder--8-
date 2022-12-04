#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Shradha";
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    printf("Vowels are %d", count);
    return 0;
}