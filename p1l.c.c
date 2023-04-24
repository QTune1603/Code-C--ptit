#include<stdio.h>

int main() {
	long long a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);
	if(a>b&&a>c){
		printf("Bong"); 
	} 
	else if(b>c&&b>a){
		printf("Vang"); 
	} 
	else {
		printf("La"); 
	} 
} 
