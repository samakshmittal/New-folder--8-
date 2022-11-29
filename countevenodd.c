#include <stdio.h> 
int main(){
int a,b; 
int i,j;
int even=0,odd=0;
printf("Enter the rows and columns of the matrix \n");
scanf("%d %d",&a,&b);
int arr[a][b];
printf("Enter elements of matrix");
for(i=1;i<=a;i++){
    for(j=1;j<=b;j++){ 
        scanf("%d\n",&arr[i][j]);
    }
}
printf("The matrix is \n"); 
for(i=1;i<=a;i++){ 
    for(j=1;j<=b;j++){
        printf("%d\t",arr[i][j]);
    }
printf("\n");
}

for (int i = 1; i <= a; i++)
{
    for (int j = 1; j <= b; j++)
    {   
        if (arr[i][j]%2==0) 
            even++;
        else 
            odd++;
    }
}
printf("Even numbers in the array are :%d", even); 
printf("\n Odd numbers in the array are :%d",odd);
return 0;
}
