#include <stdio.h>
void reverse(char);
int main()
{
    char ab[1000];
    printf("enter string to be reversed");
    scanf("%s", &ab);
    char x;
    int j=0;
    for(j==0; ab[j]!=0 ;++j);
    for (int i=0; i<=j; ++i)
    {
        printf("%c",ab[j-i]);
    }
    return 0;
}