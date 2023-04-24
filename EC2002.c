#include<stdio.h>
int main()
{
	long long n;
	int a,i,t;
	scanf("%d",&t);  
	for(i=0;i<t;i++){
		scanf("%lld",&n); 
		a=n%10;
		if(n>=10){
			while(n>=10){
				n=n/10;
			}
		if(a==n)
			printf("YES\n");
		else
			printf("NO\n");
	
		}
	} 
}
