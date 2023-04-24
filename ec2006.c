#include<stdio.h>

int main()
{
	long long n,x=1;
	scanf("%lld",&n);
	long long k=n; 
	while(k>0){
		x*=k%10;
		k/=10; 
	}  
	printf("%lld",x); 
 } 
