#include <stdio.h>
int main()
{
    int n, i=0;
    printf("Enter limit n :\n");
    scanf("%d", &n);
    do
    {
        if (i%3==0 && i%5==0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    while(i<n);
    return 0;
}