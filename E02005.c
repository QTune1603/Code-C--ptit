#include<stdio.h>

int main()
{
	long long n;
	int i,t,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%lld",&n);
		for(j=2;j<=n;j++){
			while(n%j==0){
				n/=j;
			    printf("%d ",j);
			}              
		}
		printf("\n");
	}
}
