#include<stdio.h>

int main() {
	int i,t;
	scanf("%d",&t);
	long long n;
	int x=0;
	for(i=1;i<=t;i++){
		scanf("%lli",&n);
		for(;n>0;){
			x+=n%10;
			n/=10;
		}
		printf("%d\n",x);
		x=0; 
	
	}
} 
