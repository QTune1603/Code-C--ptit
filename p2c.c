#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld",&n);
	long long souocso=0; 
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			souocso++; 
		} 
	} 
	printf("%lld",souocso); 
 } 
