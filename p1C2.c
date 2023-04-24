#include<stdio.h>


int main()
{
	float x;
	scanf("%f",&x);
	if(x>0){
		printf("%d %d",(int)(x),(int)(x+1)); 
	} 
	else if(x==0){
		printf("0 1");
	} 
	else if(x!=(float)(int)(x)){
		printf ("%d %d",(int)(x-1),(int)(x));
	} 
	else{
		printf("%d %d",(int)(x),(int)(x+1)); 
	} 
}	 

