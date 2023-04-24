#include<stdio.h>

int main() {
	long int a,b;
	scanf("%ld %ld",&a,&b); 
	if(a==0){
		if(b==0) {
			printf("Infinite solutions"); 
		}
		else {
			printf("NO"); 
		} 
	} 
	else {
		printf("%f",(float)-b/a); 
	} 
	
} 
