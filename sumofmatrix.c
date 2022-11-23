#include <stdio.h>
void main(){
    static int array[10][10];
    int i, j, c, d, s=0;
    printf("Enter the order of matrix:\n");
    scanf("%d%d", &c, &d);
    printf("Enter the co-efficients of the matrix\n");
    for(i=0; i<c; ++i){
        for (j=0; j<d; ++j){
            scanf("%d", &array[i][j]);
        }
    }
    for(i=0; i<c; ++i){
        for(j=0; j<d; ++j){
            s+=array[i][j];
        }
        printf("Sum of the %d row is = %d\n", i , s);
        s=0;
    }
    s=0;
    for(j=0; j<d; ++j){
        for(i=0; i<c; ++i){
            s+=array[i][j];
        }
        printf("Sum of the %d column is = %d\n", j, s);
        s=0;
    }
}