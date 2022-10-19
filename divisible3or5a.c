#include <stdio.h>
int main()
{
    int n, i=0;
    printf("Enter limit n :\n");
    scanf("%d", &n);
    while(i<n)
    {
        if (i%3==0 && i%5==0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}