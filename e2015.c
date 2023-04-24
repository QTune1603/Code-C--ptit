#include<stdio.h>
#include<math.h>
 
int main()
{
	int j,t;
	scanf("%d",&t);
	for(j=0;j<t;j++){
		long long n;
		scanf("%lld",&n);
		int i; 
		int count=0;
		for(i=1;i<=sqrt(n);i++){
			if(n%i==0 && i%2==0) count++;
			if(n%i==0 && (n/i)%2==0) count++;
			if((i*i==n) && (i%2==0)) count--;
		}
		printf("%d\n",count); 
	}
	 
 } 
