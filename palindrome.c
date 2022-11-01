#include <stdio.h>
int main(){
    int n, s, a=0;
    printf("Enter number");
    scanf("%d", &n);
    int og=n;
    while(n!=0){
        s=n%10;
        n=n/10;
        a=a*10+s;
    }
    printf("%d\n", a);
    printf("%d\n", og);
    if(a==og){
        printf("Palinrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
}