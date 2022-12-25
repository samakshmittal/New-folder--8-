#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count0=0;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int count5=0;
    int count6=0;    
    int count7=0;
    int count8=0;
    int count9=0;
    char arr[1000];
    scanf("%s", arr);
    int s=strlen(arr);
    for(int i=0; i<s; i++){
        if (arr[i]=='0'){
            count0+=1;
        }
        else if (arr[i]=='1'){
            count1+=1; 
        }
        else if (arr[i]=='2'){
            count2+=1;
        }
        else if (arr[i]=='3'){
            count3+=1;
        }
        else if (arr[i]=='4'){
            count4+=1;
        }
        else if (arr[i]=='5'){
            count5+=1;
        }
        else if (arr[i]=='6'){
            count6+=1;
        }
        else if (arr[i]=='7'){
            count7+=1;
        }
        else if (arr[i]=='8'){
            count8+=1;
        }
        else if (arr[i]=='9'){
            count9+=1;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d", count0, count1, count2, count3, count4, count5, count6, count7, count8, count9);
    return 0;
}
