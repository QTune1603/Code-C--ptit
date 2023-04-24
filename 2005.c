#include<stdio.h>

int main()
{
	long long j,n;
	int i,t; 
	scanf("%d",&t); 
	for(i=0;i<t;i++){
		scanf("%lld",&n);
		for(j=2;j<=n;j++){
			int x=0; 
			while(n%j==0){
				n/=j;
				x++;
			}
			if(x!=0){
				if(n==1){
					printf("%d^%d\n",j,x);
		    	}
		    	else{
					printf("%d^%d x ",j,x);
				}
			}               
		}  
	}    
}
