#include<stdio.h>

int main()
{
 	long long n;
	int i,t,k,sochan=0,sole=0;
	scanf("%d",&t); 
	for(i=0;i<t;i++){
		scanf("%lld",&n);
		while(n>0){
			k=n%10; 
			if(k%2==0){
				sochan++;
			}
			else{
				sole++;
			}
			n=n/10; 
		}	
		printf("%d %d\n",sole,sochan);
		sole=0;
		sochan=0; 
	} 
}
