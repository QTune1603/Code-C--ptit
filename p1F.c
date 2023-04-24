#include<stdio.h>

int main()
{
	int x,y;
	scanf("%d %d",&x,&y) ;
	float z;
	z=(float)y/(x*x);
	if(z<0.00185) {
		printf("Thieu can") ;
	} 
	else if(z>=0.00185&&z<0.0025){
		printf("Trung binh"); 
	} 
	else if(z>=0.0025&&z<0.003){
		printf("Thua can"); 
	} 
	else {
		printf("Beo phi"); 
	} 
	
 } 
