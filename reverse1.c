#include <stdio.h>
char reverse(char *abc){
    char x;
    int j=0;
    for(j==0; abc[j]!=0 ;++j);
    for (int i=0; i<=j; ++i)
    {
        x=abc[j-i];
        printf("%c",x);
    }
    return 0;
}
int main()
{
    char m, ab[1000];
    printf("enter string to be reversed");
    scanf("%s", &ab);
    m=reverse(ab);
    printf("%c",m);
    return 0;
}