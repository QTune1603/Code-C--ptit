#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	float x=(float)b/(a*a);
	if(x<0.00185){
		printf("Thieu can"); 
	} 
	else if(x>=0.00185&&x<0.0025){
		printf("Trung binh"); 
	} 
	else if(x>=0.0025&&x<0.003){
		printf("Thua can"); 
	} 
	else {
		printf("Beo phi"); 
	} 
 } 
