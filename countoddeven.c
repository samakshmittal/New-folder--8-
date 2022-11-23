#include <stdio.h>
void count(int arr[], int arr_size){
    int even=0, odd=0;
    for(int i=0; i<arr_size; i++){
        if (arr[i] & 1 == 1)
            odd++;
        else
            even++;
    }
    printf("Even = %d\n", even);
    printf("Odd = %d", odd);
}
int main()
{
    int n, array[1000];
    printf("Enter size of array");
    scanf("%d", &n);
    for( int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    count(array, n);
}