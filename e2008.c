#include<stdio.h>

int main()
{
	long long n;
	int i,t,j;
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
					printf("%d\n",j);
		    	}
		    	else{
					printf("%d ",j*x);
				}
			}              
		}
	}
}

