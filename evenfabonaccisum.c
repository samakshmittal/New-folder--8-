#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);
        int x, y, z, s=0;
        x=0;
        y=z=1;
        while(z<=n){
        if(z%2==0){
            s+=z;
        }
        z=x+y;
        x=y;
        y=z;
        }
        printf("%d\n",s);
    }
    return 0;
}