#include<stdio.h>
int count(int n){
    int x=0;
    while(n!=0){
        n/=10;
        x++;
    }
    return x; 
}
void freq(int n){
	int rem;
int c0=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
if(count(n)>7){
	printf("size exceeded\n");
}
else{
while(n!=0){
	rem=n%10;
	if(rem==0)
		c0++;
	if(rem==1)
		c1++;
	if(rem==2)
		c2++;
	if(rem==3)
		c3++;
	if(rem==4)
		c4++;
	if(rem==5)
		c5++;
	if(rem==6)
		c6++;
	if(rem==7)
		c7++;
	if(rem==8)
		c8++;
	if(rem==9)
		c9++;
	n=n/10;	
}
printf("Frequency of 0 is: %d\n", c0);
printf("Frequency of 1 is: %d\n", c1);
printf("Frequency of 2 is: %d\n", c2);
printf("Frequency of 3 is: %d\n", c3);
printf("Frequency of 4 is: %d\n", c4);
printf("Frequency of 5 is: %d\n", c5);
printf("Frequency of 6 is: %d\n", c6);
printf("Frequency of 7 is: %d\n", c7);
printf("Frequency of 8 is: %d\n", c8);
printf("Frequency of 9 is: %d\n", c9);
}	
}
int main(){
	int n;
	printf("Enter integer\n");
	scanf("%d",&n);
	freq(n);
return 0;
}