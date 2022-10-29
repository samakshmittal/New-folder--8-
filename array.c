#include <stdio.h>
int main(){
    float price[3];
    printf("Enter 3 prices");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    printf("Cost1 = %f, Cost2 = %f, Cost3 = %f", price[0]+price[0]*(0.18), price[1]+price[1]*(0.18), price[2]+price[2]*(0.18));
    return 0;
}