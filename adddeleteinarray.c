#include <stdio.h>
 
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n, position, c;
    printf("Enter array size");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Enter element to be inserted");
    scanf("%d", &x);
    printf("Enter position number");
    scanf("%d", &pos);
    n++;
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Enter the position where you wish to delete element\n");
    scanf("%d", &position);

    if (position >= n+1)
       printf("Deletion not possible.\n");
    else
    {
        for (c = position - 1; c < n - 1; c++)
            arr[c] = arr[c+1];

        printf("Resultant array:\n");

        for (c = 0; c < n - 1; c++)
            printf("%d\n", arr[c]);
    }
    return 0;
}