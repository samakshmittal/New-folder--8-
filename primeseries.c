#include <stdio.h>
int main(){
    int n, z=0;
    printf("Enter number");
    scanf("%d", &n);
    for(int j=2; j<=n; j++){
        int s=(j/2);
        for(int i=2; i<=s; i++){
            if(j%i==0 && j!=2){
                z=1;
                break;
            }
            else
            z=0;
        }
    if(z==0)
        printf("%d ", j);
    }
    
    return 0;
}