#include<stdio.h>

int main()
{
	int i,j,n,t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int sum=0,gt=1; 
		for(j=1;j<=n;j++){
			gt*=j;
			sum+=gt; 
		} 
		printf("%d\n",sum);
	} 
 } 
