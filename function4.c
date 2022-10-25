#include <stdio.h>
float temp(float celsius){
    float fahrenite;
    fahrenite = celsius * 1.80 + 32;
    return fahrenite;
}
int main(){
    float c;
    printf("Enter temperature in celsius");
    scanf("%f", &c);
    printf("%f", (float) temp(c));
    return 0;
}