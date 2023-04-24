#include<stdio.h>

int main()
{
	long long i,n;
	scanf("%lld",&n);
	long long dem,d=0;
	for(i = 2;i<=n;i++){
		dem=0;
		while(n%i==0){
			dem=1;
			n/=i; 
		}
		if(dem){
			d++; 
		} 
	}
	if(n!=1){
		d++; 
	}  
	printf("%lld",d);
	 
 } 
