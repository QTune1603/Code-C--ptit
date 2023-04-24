#include<stdio.h>

int main()
{
	long int a,b,c;
	scanf("%ld %ld %ld",&a,&b,&c);
	if(a>b&&a>c){
		printf("Bong"); 
	} 
	else if(b>a&&b>c){
		printf("Vang"); 
	}
	else{
		printf("La"); 
	} 
	 
 } 
